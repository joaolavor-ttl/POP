#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin>>N;

    vector<int> x(N);
    bool found = false;
    for(int i=0;i<N;i++){
        cin>>x[i];
    }
    for(int j=0;j<N-1;j++){
        if(x[j]>x[N-1]){
            found = true;
            cout<<x[j]<<"\n";
         }
    }

    return 0;
}