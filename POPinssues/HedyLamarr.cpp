#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> Hz(N);

    for (int i = 0; i < N; i++) {
        cin >> Hz[i];
    }
    sort(Hz.begin(), Hz.end());
    //an=a1 + (n-1)*razao
    bool is_pa = true;
    //Se N > 2, valida a razao a partir da diferença dos dois primeiros
    if (N > 2) {
        int razao = Hz[1] - Hz[0];
        for (int i = 2; i < N; i++) {
            if (Hz[i] - Hz[i - 1] != razao) {
                is_pa = false;
                break;
            }
        }
    }
    if (is_pa) {
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }
    return 0;
}