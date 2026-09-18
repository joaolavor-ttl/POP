#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=0;
    cin>>t;

    while(t--){
        long long A, B;
        cin>>A>>B;

        long long power=1;
        int vip_guests=0;

        while(power<=B){
            if(power>=A){
                vip_guests++;
            }
            power*=2;
        }
        cout<<vip_guests<<"\n";
    }

    return 0;
}