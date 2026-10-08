#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   string melon;
   map<string, int> cont;
   while(cin>>melon and melon!="FIM"){
      cont[melon]++;
      cout<<melon<<" "<<cont[melon]<<endl;
   }

    return 0;
}
//===MAP==================
/*
map<string, int> cont; // map to store the count of each melon type

container[melon]++; // increment the count for the current melon type
container[melon]=1; // initialize the count for a new melon type
cout<<cont[melon]; // print the count of the current melon type

for(auto& pair : cont) {
    cout << pair.first << " " << pair.second << endl; // print all melon types and their counts
}
    */