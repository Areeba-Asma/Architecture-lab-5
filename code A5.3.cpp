#include <iostream>
using namespace std;
int main(){
    const int N=16384; int a[N]={0};
    int strides[]={4,16,32,64,128};
    for(int s: strides){
        int step=s/sizeof(int), accesses=0, misses=0;
        for(int i=0;i<N;i+=step){ a[i]++; accesses++; misses++; }
        cout<<"Stride "<<s<<" bytes: accesses="<<accesses
            <<", simulated misses="<<misses<<"\\n";
    }
}