#include <iostream>
#include <chrono>
using namespace std; using namespace chrono;
int main(){
    const int N=50000; int x=0; volatile int sink=0;
    auto t=high_resolution_clock::now();
    for(int i=0;i<N;i++) x=i;
    sink=x; auto e=high_resolution_clock::now();
    cout<<"Repeated store time: "<<duration_cast<microseconds>(e-t).count()<<" us\\n";
    static int a[N]; t=high_resolution_clock::now();
    for(int i=0;i<N;i++) a[i]=i;
    sink=a[N-1]; e=high_resolution_clock::now();
    cout<<"Dispersed store time: "<<duration_cast<microseconds>(e-t).count()<<" us\\n";
}