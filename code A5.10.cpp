#include <iostream>
using namespace std;
int main(){
    const int SIZE=8; int tags[SIZE]={10,20,30,40,50,60,70,80};
    int valid[SIZE]={1,1,1,1,1,1,1,1}, q;
    cout<<"Enter tag: "; cin>>q;
    bool hit=false;
    for(int i=0;i<SIZE;i++) if(valid[i] && tags[i]==q){hit=true;break;}
    cout<<(hit?"HIT":"MISS")<<"\\n";
}