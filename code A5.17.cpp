#include <iostream>
#include <vector>
#include <chrono>
using namespace std; using namespace chrono;
int main(){
    const int N=1000000; vector<int>a(N,1); long long sum=0;
    int K[]={2,8,32,64};
    for(int k:K){
        sum=0; auto t=high_resolution_clock::now();
        for(int i=0;i<N;i++){ if(i+k<N) __builtin_prefetch(&a[i+k],0,3); sum+=a[i]; }
        auto e=high_resolution_clock::now();
        cout<<"K="<<k<<" time="<<duration_cast<microseconds>(e-t).count()<<" us\\n";
    }
}