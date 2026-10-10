#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char matriz[50][50];

    int N;
    cin>>N;
    int cont_mais=0;
    int cont_o=0;
    int cont_menos=0;
    for(int i=0;i<N;i++){//linhas
        for(int j=0;j<N;j++){//colunas
            int valor;
            cin>>valor;
            if(valor<91){
                matriz[i][j]='+';
                cont_mais++;
            }
            else if(valor<=100){
                matriz[i][j]='o';
                cont_o++;
            }
            else{
                matriz[i][j]='-';
                cont_menos++;
            }
            cout<< matriz[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";

    cout<<"+: "<<cont_mais<<endl;
    cout<<"o: "<<cont_o<<endl;
    cout<<"-: "<<cont_menos<<endl;

    return 0;
}
