#include<bits/stdc++.h>
using namespace std;

bool eh_letra(char c){
    return (c >= 'a' and c <= 'z') || (c >= 'A' and c <= 'Z');
}
bool fada(const string& s){
    int N =s.length();
    for(int i=0;i+3<N;i++){
        if(tolower(s[i])   == 'f' and
            tolower(s[i+1]) == 'a' and
            tolower(s[i+2]) == 'd' and
            tolower(s[i+3]) == 'a'){
                bool ok_left=(i==0) or !eh_letra(s[i-1]);
                bool ok_right=(i+4==N) or !eh_letra(s[i+4]);

                if(ok_left and ok_right){
                    return true;
                }
            }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin>>N)) return 0;
    
    string s;
    getline(cin, s);

    int ans=0;
    while(N-- and getline(cin,s)){
        if(fada(s)){
            ans++;
        }
    }
    cout<<ans<<'\n';

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
