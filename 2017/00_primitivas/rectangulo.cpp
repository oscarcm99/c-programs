#include <stdio.h>
#include <stdlib.h>

int main(){
    int base,
        altura,
        perimetro,
        area;
    printf("Dime la base: ");
    scanf(" %i", &base);
    printf("Dime la altura; ");
    scanf(" %i", &altura);
    /*Cálculos*/
    perimetro = 2 * base + 2 * altura;
    area = base * altura;
    printf("El rectángulo de base %i cm y de altura %i cm, tiene un perimetro de %i cm y un área de %i cm^2\n", base, altura, perimetro, area);


}
