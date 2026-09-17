//solve
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=0;
    cin>>n;

    int wi=10000, hi=10000, di=10000;
    for(int i=0;i<n;i++){
        vector<int> box(3);
        cin>>box[0]>>box[1]>>box[2];
        sort(box.begin(),box.end());
        wi=min(wi,box[0]);
        hi=min(hi,box[1]);
        di=min(di,box[2]);
    }
    long long vollume=1LL*wi*hi*di;

    cout<<vollume<<"\n";
    
return 0;
}