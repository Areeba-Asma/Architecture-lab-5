#include <iostream>
#include <iomanip>
using namespace std;
void decode(unsigned int a){
    unsigned int offset=a&0x1F;
    unsigned int index=(a>>5)&0x7F;
    unsigned int tag=(a>>12)&0xFFFFF;
    cout<<hex<<"Address 0x"<<a<<" -> Offset=0x"<<offset
        <<", Set=0x"<<index<<", Tag=0x"<<tag<<dec<<"\\n";
}
int main(){decode(0x00000000);decode(0x0000001F);decode(0x80001FE0);}