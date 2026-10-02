#include <bits/stdc++.h>
using namespace std;

bool Duplicata(const vector<string>& vistos, const string& nome){
    return find(vistos.begin(), vistos.end(), nome) != vistos.end();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin>>N;
    vector<string> vistos;
    for(int j=0;j<N;j++){
        string nome;
        cin>>nome;
        if(!Duplicata(vistos, nome)){
            vistos.push_back(nome);
            cout<<nome<<"\n";
        }
    }
    return 0;
}