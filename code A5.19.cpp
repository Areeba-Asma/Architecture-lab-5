#include <iostream>
#include <vector>
#include <chrono>
using namespace std; using namespace chrono;
int main(){
    const int N=1<<20; vector<int>a(N,1); volatile long long sum=0;
    int S[]={8,16,32,64,128,256};
    for(int s:S){
        auto t=high_resolution_clock::now();
        for(int i=0;i<N;i+=s/4) sum+=a[i];
        auto e=high_resolution_clock::now();
        cout<<"Stride "<<s<<" bytes: "<<duration_cast<microseconds>(e-t).count()<<" us\\n";
    }
}