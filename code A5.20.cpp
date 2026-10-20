#include <iostream>
#include <vector>
#include <chrono>
#include <random>
using namespace std; using namespace chrono;
int main(){
    volatile long long sum=0;
    for(size_t kb=4;kb<=65536;kb*=2){
        size_t n=(kb*1024)/sizeof(int); vector<int>a(n);
        for(size_t i=0;i<n;i++) a[i]=int(i);
        auto t=high_resolution_clock::now();
        for(size_t i=0;i<n;i+=64) sum+=a[i];
        auto e=high_resolution_clock::now();
        cout<<"Working set "<<kb<<" KB: "
            <<duration_cast<microseconds>(e-t).count()<<" us\\n";
    }
}