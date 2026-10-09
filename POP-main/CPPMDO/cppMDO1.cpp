#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//long long: suports integers up to 9,223,372...
    long long N;
    cin>>N;
    int cont=0;
    while(N>=1){
        cont++;
        N/=2;
    }
    cout<<cont<<endl;
    
    return 0;
}