#include <bits/stdc++.h>
using namespace std;

bool eh_letra(unsigned char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool eh_fada(const string& s) {
    for (int i = 0; i + 3 < (int)s.size(); i++) {
        char a = tolower((unsigned char)s[i]);
        char b = tolower((unsigned char)s[i + 1]);
        char c = tolower((unsigned char)s[i + 2]);
        char d = tolower((unsigned char)s[i + 3]);

        if (a == 'f' && b == 'a' && c == 'd' && d == 'a') {
            bool esquerda = (i == 0 || !eh_letra((unsigned char)s[i - 1]));
            bool direita = (i + 4 == (int)s.size() || !eh_letra((unsigned char)s[i + 4]));

            if (esquerda && direita) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    int resposta = 0;

    for (int i = 0; i < N; i++) {
        string s;
        getline(cin, s);

        if (eh_fada(s)) {
            resposta++;
        }
    }

    cout << resposta << '\n';

    return 0;
}

//way 2
/*
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, ans =0;
    cin>>N;

    string s;
    getline(cin, s);//clean the '\n'

    while(N--){
        getline(cin, s);
        for(char &c:s){
            c=tolower(c);
            if(!isalpha(c)) c=' ';
        }
        stringstream ss(s);
        string palavra;
        bool find=false;

        while(ss>>palavra){
            if(palavra=="fada") find =true;
        }
        if(find) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
*/

//way 3
/*
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans=0;
    string s;
    regex r("\\bfada\\b", regex::icase);
    for(cin>>n>>ws; n-- && getline(cin, s); ){
        ans+=regex_search(s, r);

    cout<<ans<<'\n';
    }
    return 0;
}
*/
