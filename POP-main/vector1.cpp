// ex01 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>

#ifndef EX01_H
#define EX01_H

int busca_linear(const std::vector<int>& v, int alvo);

#endif
int busca_linear(const std::vector<int>& v, int alvo) {
    // TODO: percorra "v" com um indice; devolva o indice assim que achar "alvo".
    // Se o laco terminar sem achar, devolva -1.
    for(int i=0;i<v.size();i++){
        if(v[i]==alvo){
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> v = {4, 1, 9, 1};

    assert(busca_linear(v, 4) == 0);
    assert(busca_linear(v, 9) == 2);

    // primeira ocorrencia, nao a ultima
    assert(busca_linear(v, 1) == 1);

    assert(busca_linear(v, 7) == -1);

    std::vector<int> vazio;
    assert(busca_linear(vazio, 1) == -1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}