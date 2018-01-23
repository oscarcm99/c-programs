
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int a[N][N];
    int resultado;
    printf("Programa que calcula determinanates. Este programa te pide los números de izquierda a derecha y de arriba a abajo.\n");
    printf("Dime el primer número: ");
    scanf(" %i", &a[0][0]);
    printf("Dime el segundo número: ");
    scanf(" %i", &a[0][1]);
    printf("Dime el tercer número: ");
    scanf(" %i", &a[0][2]);
    printf("Dime el cuarto número: ");
    scanf(" %i", &a[1][0]);
    printf("Dime el quinto número: ");
    scanf(" %i", &a[1][1]);
    printf("Dime el sexto número: ");
    scanf(" %i", &a[1][2]);
    printf("Dime el séptimo número: ");
    scanf(" %i", &a[2][0]);
    printf("Dime el octavo número: ");
    scanf(" %i", &a[2][1]);
    printf("Dime el noveno número: ");
    scanf(" %i", &a[2][2]);
    resultado = a[0][0] * a[1][1] * a[2][2] +
                a[1][0] * a[2][1] * a[0][2] +
                a[0][1] * a[1][2] * a[2][0] +
              -(a[2][0] * a[1][1] * a[0][2] +
                a[0][1] * a[1][0] * a[2][2] + 
                a[1][2] * a[2][1] * a[0][0]);
    printf("El resultado del determinante es = %i\n", resultado);
    return EXIT_SUCCESS;
}
