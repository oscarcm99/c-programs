
#include <stdio.h>
#include <stdlib.h>
#define L 2
#define N 3
void sist(double a[N][N]){
    printf("\n");
    for(int f=0; f<L; f++){
        for(int c=0; c<N; c++)
            printf("%6.1lf", a[f][c]);
        printf("\n");
    }
}
int main(){
    double a[L][N]={
        {2,3,4},
        {1,2,1}
    },
           coef[L],
           k;
           int celda=0;
           sist(a);
           for(int n=0; n<L; n++){
               coef[celda++] = k = a[n][n];
               for(int col=0; col<N; col++)
                   a[n][col] /= k;
               for(int f=n+1; f<L; f++){
                   k = a [f][n];
                   for(int col=0; col<N; col++)
                       a[f][col] -= (a[n][col]*k);
               }
               sist(a);
           }

}
