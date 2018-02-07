
#include <stdio.h>
#include <stdlib.h>
#define N 3
void prim(int a[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", a[f][c]);
        printf("\n");
    }
}
void seg(int b[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", b[f][c]);
        printf("\n");
    }
}
int main(){
    int a[N][N]={
        {2,1,3},
        {4,3,1},
        {0,1,5}
    };
    int b[N][N]={
        {0,2,3},
        {3,2,2},
        {1,2,3,}
    };
    int c[N][N];
    int f;
    prim(a);
    printf("\n");
    seg(b);
    printf("\n");
    return EXIT_SUCCESS;
}
