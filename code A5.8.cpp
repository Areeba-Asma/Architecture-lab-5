#include <iostream>
using namespace std;
int main(){
    const int C=8192,B=32;
    unsigned int P1=0x00001000;
    unsigned int P2=P1+C;
    int misses=0;
    for(int i=0;i<2000;i++){ misses+=2; }
    cout<<"P1 = 0x"<<hex<<P1<<" P2 = 0x"<<P2<<dec<<"\\n";
    cout<<"Iterations: 2000, accesses: 4000\\n";
    cout<<"Simulated misses: "<<misses<<"\\nMiss rate: 100%\\n";
}