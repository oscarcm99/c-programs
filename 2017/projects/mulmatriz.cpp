
#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 2


void primera(int matriz[M][N]){
    for(int f=0; f<M; f++){
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
    int a[M][N] = {
        {1,4},
        {2,6},
	{1,2}
    },
        b[N][N] = {
            {7,1},
            {2,3}
        },
        r[M][N], f;
    primera(a);
    segunda(b);
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            f=0;
            for(int k=0; k<M; k++)
                f += a[i][k] * b[k][j];
            r[i][j] = f;
            printf("%4i", r[i][j]);
        }
    printf("\n");
    }
    return EXIT_SUCCESS;
}
