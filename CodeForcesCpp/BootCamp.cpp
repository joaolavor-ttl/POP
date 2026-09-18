#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long k1, k2;
    cin>>n>>k1>>k2;
    string s;
    cin>>s;

    long long total=0;
    long long len=0;

    for(char c: s){
        if(c=='1'){
            len++;
        }
        else{
            if(len>0){
                if(k2>=2*k1){
                    total+=len*k1;
                }
                else{
                    total+=(len/2)*k2 + (len%2)*k1;
                }
                len =0;
            }
        }
    }
    if(len>0){
        if(k2>=2*k1){
            total+=len*k1;
        }
        else{
            total+=(len/2)*k2 + (len%2)*k1;
        }
    }
    cout<<total<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    } 
    return 0;
}