
#include <stdio.h>
#include <stdlib.h>
int suma_divisores(int numero,int divisor){
    if(divisor <= 1 && numero % divisor == 0){
        int suma = 0;
        suma += divisor;
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
        return EXIT_SUCCESS;
}
