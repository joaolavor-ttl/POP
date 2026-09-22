#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin>>N;
    cin.ignore();
    vector<string> poesia(N);

    for(int i=0;i<N;i++){
        getline(cin, poesia[i]);
        reverse(poesia[i].begin(), poesia[i].end());
    }
    for(int i=N-1; i>=0; i--){
        cout<<poesia[i]<<"\n";
    }
    return 0;
}