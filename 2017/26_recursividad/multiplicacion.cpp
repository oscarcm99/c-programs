
#include <stdio.h>
#include <stdlib.h>
int suma =0;
int suma_divisores(int numero,int divisor){
    if(numero%divisor == 0){
        suma += divisor;
        if(divisor <= 1 )
            return suma;
    }
    return suma_divisores(numero,divisor-1);
}
int main(){
    int numero, divisor, sumatotal;
    printf("Introduce un número: ");
    scanf(" %i",&numero);
    divisor = numero;

    sumatotal = suma_divisores(numero, divisor -1);
    printf("La suma total es = %i\n", sumatotal);

    if(numero == sumatotal)
        printf("El %i es un numero perfecto.\n", numero);
    else
        printf("El %i no es un numero perfecto.\n", numero);

    return EXIT_SUCCESS;
}
