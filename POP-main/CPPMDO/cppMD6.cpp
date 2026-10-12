#include<bits/stdc++.h>
using namespace std;

int calcular_turnos(int tamanho) {
    int turnos = 0;
    while (tamanho > 1) {
        if (tamanho % 2 == 0) {
            tamanho /= 2;
        } else {
            tamanho += 1;
        }
        turnos++;
    }
    return turnos;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tamanho;
    int max_turnos = 0;

    while (cin >> tamanho) {
        max_turnos = max(max_turnos, calcular_turnos(tamanho));
    }

    cout << max_turnos << "\n";

    return 0;
}

