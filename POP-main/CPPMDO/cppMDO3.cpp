#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n=0;
    cin>>n;
    int par=0;
    int impar=0;

    cout<<n<<endl;
    while(n>1){
        if(n%2==0){
            par=n/2;
            n=par;
            cout<<n<<endl;
        }
        else{
            impar=3*n+1;
            n=impar;
            cout<<n<<endl;
        }
    }

    return 0;
}