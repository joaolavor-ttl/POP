#include <cassert>
#include <iostream>
#include <vector>

#ifndef EX02_H
#define EX02_H

int indice_do_menor(const std::vector<int>& v);

#endif


int indice_do_menor(const std::vector<int>& v) {
    // TODO:
    // 1. vector vazio -> devolva -1.
    // 2. comece o menor em v[0] e o indice em 0 (NAO comece o menor em 0).
    // 3. percorra de i = 1 ate o fim; se v[i] for MENOR que o menor,
    //    atualize os dois. Use < , nao <= , para o empate ficar com o primeiro.
    if(v.size() == 0){
        return -1;
    }
    int menor = v[0];
    int indice = 0;

    for(int i=1;i<v.size();i++){
        if(v[i]<menor){
            menor = v[i];
            indice = i;
        }
    }
    return indice;
}


int main() {
    assert(indice_do_menor({4, 1, 9, 2}) == 1);

    // empate: vale o indice da PRIMEIRA ocorrencia
    assert(indice_do_menor({4, 1, 9, 1}) == 1);

    // so positivos: quem comecou o menor em 0 erra aqui
    assert(indice_do_menor({7, 3, 5}) == 1);

    // so negativos
    assert(indice_do_menor({-5, -2, -9}) == 2);

    // o menor ja na primeira posicao
    assert(indice_do_menor({1, 2, 3}) == 0);

    // um elemento so
    assert(indice_do_menor({42}) == 0);

    std::vector<int> vazio;
    assert(indice_do_menor(vazio) == -1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}