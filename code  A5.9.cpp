#include <iostream>
using namespace std;
int main(){
    int N; cout<<"Enter cache associativity N: "; cin>>N;
    for(int K=1;K<=N+2;K++)
        cout<<"K="<<K<<" -> "<<(K<=N?"within associativity (hits possible)":"exceeds associativity (conflict misses)")<<"\\n";
}