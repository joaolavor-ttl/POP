#include <bits/stdc++.h>
using namespace std;

bool temFada(const string& s){
  
  for(int i=0;i+3<(int)s.size();i++){
      if(tolower(s[i])=='f' and
        tolower(s[i+1])=='a' and
        tolower(s[i+2])== 'd' and
        tolower(s[i+3])== 'a'){
            bool esquerda = (i==0) or !isalpha(s[i-1]);
            bool direita = (i+4 ==(int)s.size()) or !isalpha(s[i+4]);
            if(esquerda and direita) return true;
        }
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