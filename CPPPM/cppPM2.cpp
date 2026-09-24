#include<bits/stdc++.h>
using namespace std;

bool eh_letra(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool fada(const string& s){
    int N =s.lenght();

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}


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
