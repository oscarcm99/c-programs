
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int a[N][N]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int resultado;
    resultado = a[0][0] * a[1][1] * a[2][2] +
                a[1][0] * a[2][1] * a[0][2] +
                a[0][1] * a[1][2] * a[2][0] +
              -(a[2][0] * a[1][1] * a[0][2] +
                a[0][1] * a[1][0] * a[2][2] + 
                a[1][2] * a[2][1] * a[0][0]);
    printf("El resultado del determinante es = %i\n", resultado);
    return EXIT_SUCCESS;
}
