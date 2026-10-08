#include<bits/stdc++.h>
using namespace std;

void organizando_por_prioridade(vector<int> &X, int n){
  sort(X.begin(), X.end());
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
    organizando_por_prioridade(X, N);
    for(int i=0;i<N;i++){
        cout << X[i] << "\n";
    }

    return 0;
}
