#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>

#ifndef EX04_H
#define EX04_H

// Retorna a media dos valores maiores que zero em v,
// ou 0.0 se nao houver nenhum positivo.
double media_dos_positivos(const std::vector<double>& v);

#endif

double media_dos_positivos(const std::vector<double>& v) {
    // TODO: declare a soma (double) e o contador (int) antes do laco.
    // Percorra v: para cada valor > 0, some ao acumulador e incremente
    // o contador. No fim, se o contador for 0, devolva 0.0;
    // senao devolva soma / contador.
    double soma = 0.0;
    int contador = 0;
    for (double valor : v) {
        if (valor > 0) {
            soma += valor;
            contador++;
        }
    }
    if (contador == 0) {
        return 0.0;
    }
    return soma / contador;
}
static bool perto(double a, double b) {
    return std::fabs(a - b) < 1e-9;
}

int main() {
    assert(perto(media_dos_positivos({8.0, -3.0, 10.0}), 9.0));

    // todos positivos: a media e a do vector inteiro
    assert(perto(media_dos_positivos({2.0, 4.0}), 3.0));

    // nenhum positivo: 0.0, e nao uma divisao por zero
    assert(perto(media_dos_positivos({-1.0, -2.0}), 0.0));

    // o zero NAO conta como positivo
    assert(perto(media_dos_positivos({0.0, 6.0}), 6.0));
    assert(perto(media_dos_positivos({0.0, 0.0}), 0.0));

    // vector vazio
    std::vector<double> vazio;
    assert(perto(media_dos_positivos(vazio), 0.0));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}