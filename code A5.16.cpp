#include <iostream>
using namespace std;
int main(){
    int X=0;
    X=25;
    cout<<"Write Allocate: store brings line into cache; next load is simulated HIT. Value="<<X<<"\\n";
    cout<<"No-Write Allocate: store bypasses cache; next load is simulated MISS.\\n";
}