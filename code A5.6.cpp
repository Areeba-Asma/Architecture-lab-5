#include <iostream>
using namespace std;
struct Entity{int x,y,tag,z;};
int main(){
    const int N=10000; static Entity aos[N]; static int x[N],y[N],z[N],tag[N];
    long long s1=0,s2=0;
    for(int i=0;i<N;i++){aos[i].x=i; x[i]=i;}
    for(int i=0;i<N;i++) s1+=aos[i].x;
    for(int i=0;i<N;i++) s2+=x[i];
    cout<<"AoS sum: "<<s1<<"\\nSoA sum: "<<s2<<"\\n";
    cout<<"AoS entity size: "<<sizeof(Entity)<<" bytes\\n";
    cout<<"SoA x element size: "<<sizeof(int)<<" bytes\\n";
}