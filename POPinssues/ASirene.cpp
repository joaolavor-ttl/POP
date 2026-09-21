#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c1;
    int H=0, M=0, S=0;

    int count=0;
    for(int i=0;i<32;i++){
        cin>>H>>c1>>M>>c1>>S;
        if(H>=0 && H<=23 && M>=0 && M<=59 && S>=0 && S<=59){
            if(H>=22 || H<6){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}