#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;

    vector<string> mapa(n);
    for (int i = 0; i < n; ++i) {
        cin >> mapa[i];
    }

    // Vetores de deslocamento para os 8 vizinhos
    int dr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int dc[] = {-1,  0,  1, -1, 1, -1, 0, 1};

    for (int r = 0; r < n; ++r) {
        string linha = "";
        for (int c = 0; c < n; ++c) {
            if (mapa[r][c] == '*') {
                linha += '9';
            } else {
                int bombas = 0;
                for (int i = 0; i < 8; ++i) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                        if (mapa[nr][nc] == '*') {
                            bombas++;
                        }
                    }
                }
                linha += to_string(bombas);
            }
        }
        cout << linha << "\n";
    }
    

    return 0;
}