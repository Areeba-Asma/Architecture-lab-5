#include <iostream>
using namespace std;
int main(){
    const int N=256,T=16; static int A[N][N],B[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) A[i][j]=i*N+j;
    for(int ii=0;ii<N;ii+=T)
      for(int jj=0;jj<N;jj+=T)
        for(int i=ii;i<ii+T && i<N;i++)
          for(int j=jj;j<jj+T && j<N;j++) B[j][i]=A[i][j];
    cout<<"Blocked transpose completed. Tile size = "<<T<<"x"<<T<<"\\n";
}