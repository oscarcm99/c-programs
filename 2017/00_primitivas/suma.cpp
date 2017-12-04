#include <stdlib.h>
#include <stdio.h>


int main(){
    double numero1,
           numero2;

    printf("Introduce el primer operando: ");
    scanf(" %lf", &numero1);

    printf("Introduce el segundo operando: ");
    scanf(" %lf", &numero2);
    
    printf(" La suma es: %lf + %lf = %.3lf\n", numero1, numero2, numero1 + numero2);    




    return EXIT_SUCCESS;
}
