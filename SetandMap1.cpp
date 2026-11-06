#include<bits/stdc++.h>
using namespace std;

int Insert_elements(set<int> &s, vector<int> &v){
    int count = 0;
    v.insert(v.end(), s.begin(), s.end());
    return count;
}
//Exercício 1: Inserção de Elementos em um set
//Crie uma função que receba um set<int> e um vetor de inteiros. 
//A função deve inserir todos os elementos do vetor no set. Retorne
//o número de elementos que foram adicionados ao set.
