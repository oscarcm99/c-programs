
#include <stdio.h>
#include <stdlib.h>
#define N 3


void primera(int matriz[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", matriz[f][c]);
        printf("\n");
    }
    printf("\n");
}
void segunda(int matriz[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", matriz[f][c]);
        printf("\n");
    }
    printf("\n");
}
int main(){
    int a[N][N] = {
        {1,4,1},
        {2,6,8},
        {3,7,5}
    },
        b[N][N] = {
            {7,1,1},
            {2,3,7},
            {9,0,1}
        },
        r[N][N], f;
    primera(a);
    segunda(a);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            f=0;
            for(int k=0; k<N; k++)
                f += a[i][k] * b[k][j];
            r[i][j] = f;
            printf("%4i", r[i][j]);
        }
    printf("\n");
    }
    return EXIT_SUCCESS;
}
