#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int P = 0;
    cin >> P;

    int total_meloes = 0;
    int total_goblins = 0;

    int F = 0, M = 0, G = 0;

    while (true) {
        cin >> F >> M >> G;
        if (F == 0 && M == 0 && G == 0) {
            break;
        }
        if (P < F) {
            total_meloes += M;
            total_goblins += G;
        }
        cout << "Meloes roubados: " << total_meloes << "\n";
        cout << "Goblins resgatados: " << total_goblins << "\n";
        cout << "---\n";
    }

    return 0;
}