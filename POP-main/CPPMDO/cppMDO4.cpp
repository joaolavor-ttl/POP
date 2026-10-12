#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int L, C;
    if (!(cin >> L >> C)) return 0;

    vector<vector<int>> mapa(L, vector<int>(C));
    vector<char> linhas_M(L, '-');
    vector<char> colunas_M(C, '-');

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cin >> mapa[i][j];
            if (mapa[i][j] == 1) {
                linhas_M[i] = 'M';
                colunas_M[j] = 'M';
            }
        }
    }

    int X = 0;
    for (char c : linhas_M) if (c == 'M') X++;
    for (char c : colunas_M) if (c == 'M') X++;

    cout << X << "\n";

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << mapa[i][j] << " ";
        }
        cout << linhas_M[i] << "\n";
    }

    for (int j = 0; j < C; j++) {
        cout << colunas_M[j] << (j == C - 1 ? "" : " ");
    }
    cout << "\n";
    

    return 0;
}