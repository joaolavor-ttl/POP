#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v;
    int a=0;
    while(cin>>a){
        if(a!=0){
            v.push_back(a);
        }
        else{
//Sort the vector in ascending order and print the largest element (the last element after sorting)
        sort(v.begin(), v.end());
        cout<<v.back()<<endl;
//Remove the largest element from the vector
        v.pop_back();
        } 
        if(v.size()==n){
            break;
        }
    }


    return 0;
}