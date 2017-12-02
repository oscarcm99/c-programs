#include <stdlib.h>
#include <stdio.h>

int main(){
    double lado,
           menor,
           mayor,
           perimetro,
           area;
    /*Entrada de datos*/
    printf("Dime el lado: ");
    scanf(" %lf", &lado);
    printf("Dime la diagonal menor: ");
    scanf(" %lf", &menor);
    printf("Dime la diagonal mayor: ");
    scanf(" %lf", &mayor);
    /*Calculos*/
    perimetro = 4 * lado;
    area = menor * mayor / 2;
    /*salida de datos*/
    printf("El rombo tiene 4 lados que miden %.2lfcm cada uno, una diagonal menor que mide %.2lfcm y una mayor que mide %.2lfcm. El perimetro mide %.2lfcm y el area mide %.2lfcm cuadrados\n", lado, menor, mayor, perimetro, area);

}
