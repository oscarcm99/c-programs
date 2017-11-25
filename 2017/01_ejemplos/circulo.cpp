#include <stdio.h>
#include <stdlib.h>

int main(){
    double radio,
           longitud,
           area;
    system("echo Programa para realizar el area y longitud de un círculo");
    /*ENTRADA DE DATOS*/
    printf("RADIO: ");
    scanf(" %lf", &radio);
    
    /*CALCULOS*/
    longitud = 2 * 3.1416 * radio;
    area = radio * radio * 3.1416;   
    
    /*SALIDA DE DATOS*/
    printf("La longitud del circulo es: %lf cm\n" "El area del circulo es: %lf cm\n", longitud, area);

    
    return EXIT_SUCCESS;      
}

