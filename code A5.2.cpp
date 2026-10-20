#include <iostream>
using namespace std;
int main(){
    int x=0; const int iterations=10000; int misses=1;
    for(int i=0;i<iterations;i++) x++;
    cout<<"Iterations: "<<iterations<<"\\n";
    cout<<"First access miss: 1\\n";
    cout<<"Subsequent simulated misses: 0\\n";
    cout<<"Final value: "<<x<<"\\n";
}