#include <bits/stdc++.h>
using namespace std;

bool temFada(const string& s){
  for(int i=0;i+3<(int)s.size();i++){
    if(tolower((unsigned char)s[i])=='f' and
       tolower((unsigned char)s[i+1])=='a' and
       tolower((unsigned char)s[i+2])=='d' and
       tolower((unsigned char)s[i+3])=='a')
      return true;
  }
  return false;
}
int main(){
    
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N;
  cin>>N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  int total=0;
  
  for(int j=0;j<N;j++){
      string line;
      
      getline(cin, line);
      if(temFada(line)) total++;
  }
  cout<<total<<"\n";
  
  return 0;
}