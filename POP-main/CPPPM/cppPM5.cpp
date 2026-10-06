#include <bits/stdc++.h>
using namespace std;

bool Esconderijo(string &s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='X') return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int pos=0;
    int meloes=0;
    string s;

    while(cin>>s){
        if(Esconderijo(s)){
            break;
        }
        else{
            int opcoes=0;
            if(s[pos]=='X'){
                cout<<"Silêncio..."<<endl;
            }
            else{
                opcoes=0;
                if(pos>0 and s[pos-1]=='O') opcoes++;
                if(pos+1<s.size() and s[pos+1]=='O') opcoes++;
                if(opcoes==1){
                    if(pos>0 and s[pos-1]=='O'){
                        pos--;
                    }
                    else{
                        pos++;
                    }
                    cout<<"Correndo pro esconderijo "<<pos<<"!"<<endl;
                }
                else{
                    cout<<"Tiro de Melão!!!"<<endl;
                    meloes++;
                }
            }
        }
    }
    cout<<"Vitória com "<<meloes<<" melões!"<<endl;

    return 0;
}




