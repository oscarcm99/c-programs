
#include <stdio.h>
#include <stdlib.h>
#define N 2
void matrizA(int a[N][N] ){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", a[f][c]);
        printf("\n");
    }
}
void matrizB(int b[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", b[f][c]);
        printf("\n");
     }
}
int main(){
    int a[N][N]={
        {2,5},
        {3,7}
    };
    int b[N][N]={
        {4,6},
        {2,9}
    };
    int r[N][N];
    int i=0,j=0;
    int p;
    matrizA(a);
    printf("\n");
    matrizB(b);

    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            for(int k=0; k<N; k++)
                r[i][j]+= a[i][k]*b[k][j];
        printf("%i", r[i][j]);
    }
    return EXIT_SUCCESS;
}
