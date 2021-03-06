#include <stdio.h>
#include <stdlib.h>

#define N 3
// Normalizo la fila n
// Apunto el coeficiente n
// Busco los 0's en las filas inferiores
//    Resto a la fila i la fila n multiplicada por ain
void matriz(double a[N][N]){
    printf("\n");
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%6.1lf", a[f][c]);
        printf("\n");
    }
}

int main(){
    double a[N][N] = {
        {2, 3, 4},
        {4, 7, 1},
        {6, 2, 3}
    }, coef[N], k, det=1;
    int cima=0;
    matriz(a);

    for(int n=0; n<N; n++){
        coef[cima++] = k = a[n][n];
        for(int col=0; col<N; col++)
            a[n][col] /= k;
        for(int f=n+1; f<N; f++){
            k = a[f][n];
            for(int col=0; col<N; col++)
                a[f][col] -= (a[n][col] * k);
        }
        matriz(a);
    }






    return EXIT_SUCCESS;
}
