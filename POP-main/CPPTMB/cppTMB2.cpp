#include<bits/stdc++.h>
using namespace std;

int win_function(vector<int>& N, int n){
    int midle=N.size()/2;
    int turnos=0;
    //varredura pela esquerda
    for(int i=0;i<midle;i++){
        if(N[i]>0){
            turnos+=(midle-i);
            break;
        }
    }
    //varredur pela direita
    for(int i=n-1;i>midle;i--){
        if(N[i]>0){
            turnos+=(i-midle);
            break;
        }
    }
    return turnos;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> X(N);
    for(int i=0;i<N;i++){
        cin >> X[i];
    }
    cout<< win_function(X, N) << "\n";
    
    return 0;
}