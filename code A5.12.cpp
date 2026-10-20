#include <iostream>
using namespace std;
int main(){
    const unsigned int MASK=0x7F;
    unsigned int addresses[]={0x00001000,0x00001400,0x00001800,0x00001C00};
    for(unsigned int a:addresses){
        unsigned int raw=(a>>5)&MASK;
        unsigned int tag=(a>>12);
        unsigned int hashed=raw^(tag&MASK);
        cout<<"Address 0x"<<hex<<a<<": raw index="<<raw
            <<" hashed index="<<hashed<<dec<<"\\n";
    }
}