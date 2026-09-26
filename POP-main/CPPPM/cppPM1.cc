#include <iostream>
#include <string>

using namespace std;

int main() {
    // Otimização de I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (getline(cin, s)) {
        string decodificado = "";
        
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                decodificado += ' ';
            } else {
                decodificado += s[i + 1];
                i++; 
            }
        }
        
        cout << decodificado << "\n";
    }

    return 0;
}
