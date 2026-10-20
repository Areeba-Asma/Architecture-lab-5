#include <iostream>
#include <chrono>
using namespace std; using namespace chrono;
int main(){
    volatile int x=1; long long sum=0;
    auto t=high_resolution_clock::now(); sum+=x;
    auto e=high_resolution_clock::now();
    cout<<"Hot access measured time: "<<duration_cast<nanoseconds>(e-t).count()<<" ns\\n";
    cout<<"Note: exact cache-flush/RDTSC behavior is CPU/compiler specific and is not simulated by standard C++.\\n";
}