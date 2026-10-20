#include <iostream>
using namespace std;
int main(){
    char stream[]={'A','B','A','C','A','B'}; char w1='-',w2='-'; int lru=0;
    for(char x:stream){
        bool hit=(x==w1||x==w2);
        if(!hit){ if(w1=='-') w1=x; else if(w2=='-') w2=x; else if(lru==0) w1=x; else w2=x; }
        else lru=(x==w1)?1:0;
        cout<<"Access "<<x<<" -> "<<(hit?"HIT":"MISS")<<" | Way1="<<w1<<" Way2="<<w2<<" LRU="<<lru<<"\\n";
    }
}