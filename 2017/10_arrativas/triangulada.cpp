
#include <stdio.h>
#include <stdlib.h>
#define N 3
/* Normalizar la fila N 
 * Apuntar al coeficiente
 * Buscar los 0 en las columnas n
 * en la fila i le resto a[i][n] a la fila N */
void matriz(double a[N][N]){
    printf("\n");
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%6.1lf", a[c][f]);
        printf("\n");
        printf("\n");
    }
}
int main(){
    double a[N][N]{
        {2,5,6},
        {6,2,9},
        {8,7,1}
    },
    coef[N],
    k,
    det=1;
    int cima=0;
    matriz(a);
    return EXIT_SUCCESS;
}
