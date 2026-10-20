#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
int main(){
    const int N=256; static int a[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) a[i][j]=i+j;
    volatile long long sum=0;
    auto t1=high_resolution_clock::now();
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) sum+=a[i][j];
    auto t2=high_resolution_clock::now();
    auto row=duration_cast<microseconds>(t2-t1).count();
    t1=high_resolution_clock::now();
    for(int j=0;j<N;j++) for(int i=0;i<N;i++) sum+=a[i][j];
    t2=high_resolution_clock::now();
    auto col=duration_cast<microseconds>(t2-t1).count();
    cout<<"Row-major time: "<<row<<" microseconds\\n";
    cout<<"Column-major time: "<<col<<" microseconds\\n";
}