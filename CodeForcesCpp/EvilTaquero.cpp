#include <bits/stdc++.h>
using namespace std;
 //coding for tests
int main() {
    // Otimização de I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    if (cin >> s) {
        string res;
        res.reserve(s.size() * 7 / 6 + 16);
 
        size_t pos = 0;
        size_t last = 0;
        while ((pos = s.find("mesero", last)) != string::npos) {
            res.append(s, last, pos - last);
            res += "taquero";
            last = pos + 6;
        }
        res.append(s, last, string::npos);
 
        cout << res << "\n";
    }
 
    return 0;
}