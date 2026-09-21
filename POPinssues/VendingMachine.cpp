#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

const int MAX_BEBIDAS = 10;
const int CODIGO_ADMIN = 99;            
const string SENHA_ADMIN = "admin123";

struct Bebida {
    string nome;
    double preco;
    int estoque;
};

// Funções já prontas
void inicializarBebidas(Bebida bebidas[], int &totalBebidas);
void mostrarBebidas(Bebida bebidas[], const int &totalBebidas);
void verSaldo(const double &saldo);
void menuAdministrador(Bebida bebidas[], int &totalBebidas);
void limparTela();
void pausar();
bool precoValido(double preco);
void mostrarEstoque(Bebida bebidas[], const int &totalBebidas);
void alterarBebida(Bebida bebidas[], const int &totalBebidas);

// Funções a serem completadas
void inserirMoedas(double &saldo, double valor);
void comprarBebida(Bebida bebidas[], const int &totalBebidas, double &saldo, int bebida, int quantidade);
void sacarSaldo(double &saldo);
void cadastrarBebida(Bebida bebidas[], int &totalBebidas);
void reporEstoque(Bebida bebidas[], const int &totalBebidas);

int main() {
    cout << fixed << setprecision(2);

    Bebida bebidas[MAX_BEBIDAS];
    int totalBebidas = 0;
    double saldo = 0.0;
    int opcao;
    double valorMoeda;
    int bebidaEscolhida, quantidade;

    inicializarBebidas(bebidas, totalBebidas);

    do {
        limparTela();
        cout << "--- Máquina de Venda de Bebidas ---\n";
        cout << "1. Ver Bebidas\n";
        cout << "2. Inserir Moeda\n";
        cout << "3. Comprar Bebida\n";
        cout << "4. Ver Saldo\n";
        cout << "5. Sacar Saldo\n";
        cout << "6. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        limparTela();

        switch (opcao) {
        case 1:
            mostrarBebidas(bebidas, totalBebidas);
            break;
        case 2:
            cout << "Insira uma moeda (0.25, 0.50 ou 1.00): ";
            cin >> valorMoeda;
            inserirMoedas(saldo, valorMoeda);
            break;
        case 3:
            mostrarBebidas(bebidas, totalBebidas);
            cout << "Escolha uma bebida: ";
            cin >> bebidaEscolhida;
            cout << "Escolha a quantidade: ";
            cin >> quantidade;
            comprarBebida(bebidas, totalBebidas, saldo, bebidaEscolhida, quantidade);
            break;
        case 4:
            verSaldo(saldo);
            break;
        case 5:
            sacarSaldo(saldo);
            break;
        case 6:
            cout << "Encerrando o programa.\n";
            break;
        case CODIGO_ADMIN:   // não aparece no menu
            menuAdministrador(bebidas, totalBebidas);
            break;
        default:
            cout << "Opção inválida. Tente novamente.\n";
            break;
        }

        if (opcao != 6 && opcao != CODIGO_ADMIN) pausar();

    } while (opcao != 6);

    return 0;
}

// ================== FUNÇÕES PRONTAS ==================

// Cadastra as bebidas iniciais
void inicializarBebidas(Bebida bebidas[], int &totalBebidas) {
    bebidas[0] = {"Água", 0.50, 5};
    bebidas[1] = {"Refrigerante", 1.00, 5};
    bebidas[2] = {"Suco", 1.50, 5};
    totalBebidas = 3;
}

// Exibe as bebidas (a numeração começa em 1)
void mostrarBebidas(Bebida bebidas[], const int &totalBebidas) {
    cout << "Bebidas disponíveis:\n";
    for (int i = 0; i < totalBebidas; i++) {
        cout << i + 1 << ". " << bebidas[i].nome << " - R$" << bebidas[i].preco;
        if (bebidas[i].estoque == 0) {
            cout << " (ESGOTADO)";
        }
        cout << "\n";
    }
}

void verSaldo(const double &saldo) {
    cout << "Saldo atual: R$" << saldo << endl;
}

// Menu escondido do administrador
void menuAdministrador(Bebida bebidas[], int &totalBebidas) {
    string senha;
    cout << "Senha do administrador: ";
    cin >> senha;

    if (senha != SENHA_ADMIN) {
        cout << "Acesso negado.\n";
        pausar();
        return;
    }

    int opcao;
    do {
        limparTela();
        cout << "=== MODO ADMINISTRADOR ===\n";
        cout << "1. Ver Estoque\n";
        cout << "2. Cadastrar Bebida\n";
        cout << "3. Alterar Bebida\n";
        cout << "4. Repor Estoque\n";
        cout << "5. Voltar\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        limparTela();

        switch (opcao) {
        case 1: mostrarEstoque(bebidas, totalBebidas); break;
        case 2: cadastrarBebida(bebidas, totalBebidas); break;
        case 3: alterarBebida(bebidas, totalBebidas); break;
        case 4: reporEstoque(bebidas, totalBebidas); break;
        case 5: cout << "Saindo do modo administrador.\n"; break;
        default: cout << "Opção inválida.\n"; break;
        }

        pausar();
    } while (opcao != 5);
}

void limparTela() {
    //cout << "\033[2J\033[1;1H";
    system("clear"); // Linux
    //system("cls"); // Windows
}

void pausar() {
    cout << "Pressione Enter para continuar...";
    cin.ignore();
    cin.get();
}

// Preço válido: maior que zero e múltiplo de R$0.25 (as moedas aceitas)
bool precoValido(double preco) {
    double moedas = preco * 4;
    return preco > 0 && moedas == (int)moedas;
}

// Lista todas as bebidas com preço e estoque
void mostrarEstoque(Bebida bebidas[], const int &totalBebidas) {
    cout << "Nº  Bebida - Preço - Estoque\n";
    for (int i = 0; i < totalBebidas; i++) {
        cout << i + 1 << ".  " << bebidas[i].nome << " - R$" << bebidas[i].preco
             << " - " << bebidas[i].estoque << " unid.";
        if (bebidas[i].estoque == 0) cout << "  <- REPOR";
        cout << "\n";
    }
}

// Altera nome e/ou preço de uma bebida (use como EXEMPLO para as suas funções)
void alterarBebida(Bebida bebidas[], const int &totalBebidas) {
    mostrarEstoque(bebidas, totalBebidas);
    int numero;
    cout << "Número da bebida a alterar: ";
    cin >> numero;

    if (numero < 1 || numero > totalBebidas) {
        cout << "Bebida inválida." << endl;
        return;
    }

    string novoNome;
    double novoPreco;

    cout << "Novo nome (Enter para manter \"" << bebidas[numero - 1].nome << "\"): ";
    cin.ignore();
    getline(cin, novoNome);
    cout << "Novo preço (0 para manter R$" << bebidas[numero - 1].preco << "): ";
    cin >> novoPreco;

    if (novoPreco != 0 && !precoValido(novoPreco)) {
        cout << "Preço inválido. Use múltiplos de R$0.25." << endl;
        return;
    }

    if (!novoNome.empty()) bebidas[numero - 1].nome = novoNome;
    if (novoPreco != 0) bebidas[numero - 1].preco = novoPreco;

    cout << "Bebida atualizada: " << bebidas[numero - 1].nome
         << " - R$" << bebidas[numero - 1].preco << endl;
}

// ================== FUNÇÕES A SEREM COMPLETADAS ==================

// 1) Adiciona a moeda ao saldo (aceitar apenas 0.25, 0.50 e 1.00)
void inserirMoedas(double &saldo, double valor) {
    if(valor==0.25 or valor==0.50 or valor==1.00){
        saldo+=valor;
        cout<<"Saldo atualizado!"<<endl;
    }
    else{
        cout<<"Moeda inválida!"<<endl;
        return;
    }
}

// 2) Verifica bebida, quantidade, estoque e saldo; se tudo estiver certo,
//    desconta o saldo e o estoque
void comprarBebida(Bebida bebidas[], const int &totalBebidas, double &saldo, int bebida, int quantidade) {
    if(bebida<1 or bebida>totalBebidas){
        cout<<"Bebida inválida!"<<endl;
        return;
    }
    if(quantidade<1){
        cout<<"Quantidade invalida."<<endl;
        return;
    }
    if(bebidas[bebida-1].estoque<quantidade){
        cout<<"Estoque insuficiente"<<endl;
        return;
    }
    double totalCompra = bebidas[bebida-1].preco * quantidade;
    if(saldo<totalCompra){
        cout<<"Saldo insuficiente!"<<endl;
        return;
    }
    saldo -= totalCompra;
    bebidas[bebida-1].estoque -= quantidade;
    cout<<"Compra realizada com sucesso!"<<endl;
}

// 3) Mostra o saldo disponível e zera o saldo
void sacarSaldo(double &saldo) {
    cout<<"Saldo disponível: R$" << saldo << endl;
    saldo = 0;
}

// 4) Lê nome, preço e estoque de uma nova bebida e adiciona ao final do vetor
void cadastrarBebida(Bebida bebidas[], int &totalBebidas) {
    Bebida novaBebida;
    cout << "Nome da nova bebida: ";
    cin.ignore();
    getline(cin, novaBebida.nome);
    cout << "Preço da nova bebida: ";
    cin >> novaBebida.preco;
    if (!precoValido(novaBebida.preco)) {
        cout << "Preço inválido. Use múltiplos de R$0.25." << endl;
        return;
    }
    cout << "Estoque inicial da nova bebida: ";
    cin >> novaBebida.estoque;
    bebidas[totalBebidas] = novaBebida;
    totalBebidas++;
    cout << "Bebida cadastrada com sucesso!" << endl;
}

// 5) Adiciona unidades ao estoque de uma bebida existente
void reporEstoque(Bebida bebidas[], const int &totalBebidas) {
    mostrarEstoque(bebidas, totalBebidas);
    int numero;
    cout << "Número da bebida a repor: ";
    cin >> numero;

    if (numero < 1 || numero > totalBebidas) {
        cout << "Bebida inválida." << endl;
        return;
    }
    int quantidade;
    cout << "Quantidade a repor: ";
    cin >> quantidade;
    if (quantidade < 1) {
        cout << "Quantidade inválida." << endl;
        return;
    } 
    bebidas[numero - 1].estoque += quantidade;
    cout << "Estoque atualizado: " << bebidas[numero - 1].estoque << " unidades." << endl;
}

// ================== QUESTÕES DE COMPREENSÃO ==================
// Responda cada questão do enunciado com suas palavras.
// Q1:
// Q2:
// Q3:
// Q4:
// Q5:
// Q6: