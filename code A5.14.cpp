#include <iostream>
using namespace std;
int main(){
    char s[]={'A','B','A','C','A','B'}; 
    cout<<"Reference sequence: A B A C A B\\n";
    cout<<"This program demonstrates the trace; exact counts depend on replacement-state implementation.\\n";
    int hits=0; char a='-',b='-';
    for(char x:s){if(x==a||x==b)hits++;else if(a=='-')a=x;else if(b=='-')b=x;else a=x;}
    cout<<"Simple 2-way trace hits: "<<hits<<"\\n";
}