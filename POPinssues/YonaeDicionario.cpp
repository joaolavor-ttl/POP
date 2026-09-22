#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //vector:array dinamico com posições numeradas(indices)
    //map:guarda pares de dados, ao inves de um indice, o map guarda uma key.  
    int N, M;
    cin>> N >> M;

    map <string, int> pagina;
    for(int i=1;i<=N;i++){
        for(int j=0;j<M;j++){
            string palavra;
            cin>>palavra;
            pagina[palavra]=i;
        }
    }
    int Q;
    cin>>Q;

    for(int i=0;i<Q;i++){
        string busca;
        cin>>busca;
        cout<<busca<<" "<<pagina[busca]<<"\n";
    }

    return 0;
}