//Todos os exercicios devem ser copiados e colados em um copilador online para
//verificação dos resultados. Todos os testes devem passar para que o exercício seja considerado correto.

//Exercício 1: Inserção de Elementos em um set
//Crie uma função que receba um set<int> e um vetor de inteiros. 
//A função deve inserir todos os elementos do vetor no set. Retorne
//o número de elementos que foram adicionados ao set.

#include<bits/stdc++.h>
using namespace std;

int Insert_elements(set<int> &s, vector<int> &v){
    int count = 0;
    for(int i=0;i<v.size();i++){
        auto result = s.insert(v[i]);
        if(result.second) count++; // Se o elemento foi inserido, incrementa o contador
    }
    return count;
}
int main() {
	set<int> conjunto = {1, 2, 3};
	vector<int> elementos = {3, 4, 5, 6};
    
	int adicionados = Insert_elements(conjunto, elementos);
    
	// Testes
	assert(adicionados == 3); // 3 elementos novos foram adicionados
	assert(conjunto.size() == 6); // Tamanho total do conjunto deve ser 6
    
	cout << "Todos os testes passaram para o exercício 1.\n";
	return 0;
}
//Exercício 2: Inserção de Pares Chave-Valor em um map
//Crie uma função que receba um map<string, int> e um vetor
//de pares chave-valor (pair<string, int>). A função deve 
//inserir todos os pares no map. Se uma chave já existir, atualize
// o valor associado a ela. Retorne o número de chaves que foram inseridas.

auto Insert_pairs(map<string, int> &m, vector<pair<string, int>> &v){
	int count = 0;
	for(int i=0;i<v.size();i++){
		auto result=m.insert(v[i]);
		if(result.second=false){
			
		}
}

//testing codes:
//test 1;

struct Leitura{
	string sensor;
	double valor;
	bool valida(){
		return valor>=-40.0 and valor<=125.0;
	}
};
bool maior_valida(vector<Leitura>& v, Leitura& saida){
	 bool find=false;//variavel para verificar se encontrou algum valor valido
	 Leitura maior;//variavel para armazenar o maior valor valido
	 for(int i=0;i<v.size();i++){//percorre o vetor de leituras
		if(v[i].valida()){//verifica se a leitura é valida
			if(!find or v[i].valor>maior.valor){//verifica se é a primeira leitura valida ou se o valor da leitura atual é maior que o maior valor encontrado
				maior=v[i];//atualiza o maior valor encontrado
				find=true;//atualiza a variavel de controle para indicar que encontrou um valor valido
			}
		}
	 }
	 if(find){//verifica se encontrou algum valor valido
		 saida=maior;//atualiza a saida com o maior valor encontrado
		 return find;//retorna true indicando que encontrou um valor valido
	 }
	 return false;//retorna false indicando que não encontrou nenhum valor valido
}