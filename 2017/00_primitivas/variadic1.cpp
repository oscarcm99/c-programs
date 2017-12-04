#include <stdio.h>
#include <stdlib.h>

int main(){
    double op1,
           op2;
    printf("Dime el 1er operando: ");
    scanf(" %lf", &op1);
    printf("Dime el 2do operando: ");
    scanf(" %lf", &op2);
    printf(" La suma es: %.2lf\n" " La resta es: %.2lf\n" " La multiplicación es: %.2lf\n" " La división es: %.2lf\n" , op1 + op2, op1 - op2, op1 * op2, op1 / op2);
    return EXIT_SUCCESS;
}
