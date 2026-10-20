#include <iostream>
using namespace std;
int main(){
    const int sets=128;
    int strides[]={1024,1028};
    for(int s:strides){
        bool used[sets]={0}; int addr=0;
        for(int i=0;i<128;i++){used[(addr/32)%sets]=true;addr+=s;}
        int count=0; for(bool v:used) if(v) count++;
        cout<<"Stride "<<s<<" bytes uses "<<count<<" of "<<sets<<" sets.\\n";
    }
}