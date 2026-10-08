#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name;
//Double-ended queue (deque) is a sequence container that allows fast insertion and deletion at both its beginning and its end. It is similar to a vector, but it can grow or shrink in size more efficiently when elements are added or removed from either end.
    deque<string> fila;
    while(cin>>name and name !="FIM"){
        if(name=="PROXIMO"){
//Remove and print the first person in the queue (the one who has been waiting the longest)
            string pessoa = fila.front();
            fila.pop_front();
            cout<<"PROXIMO: "<<pessoa<<endl;
        } else {
//Add a new person to the end of the queue
            fila.push_back(name);
            cout<<"FILA: ";
            for(const string& pessoa : fila){
                cout<<" "<<pessoa;
            }
            cout<<endl;
        }
    }

    return 0;
}