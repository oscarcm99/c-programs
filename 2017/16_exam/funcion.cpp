
#include <stdio.h>
#include <stdlib.h>
void funcion(int *x, int *y){
    printf("Dame el primer numero: ");
    scanf(" %i", x);
    printf("Dame el segundo numero: ");
    scanf(" %i", y);
    printf("Tus numeros guardados son: %i %i \n", *x, *y);
}
int main(){
    int a, b;
    funcion(&a,&b);
    return EXIT_SUCCESS;
}
