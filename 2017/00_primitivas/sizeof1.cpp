#include <stdio.h>
#include <stdlib.h>
int main(){
    short int ent = 1;
    long int entero = 2;
    unsigned int signo = 3;
    char car = 'a';
    const char *cad = "vampire";
    float irr = 2.34;
    double real = 2.345;

    printf("El numero entero %i ocupa %lu bytes\n", ent, sizeof(int));
    printf("El numero entero %li ocupa %lu bytes\n", entero, sizeof(int));
    printf("El numero entero %u ocupa %lu bytes\n ", signo, sizeof(int));
    printf("El caracter %c ocupa %lu bytes\n", car, sizeof(char));
    printf("La cadena de caracteres %s ocupa %lu bytes\n", cad, sizeof(char));
    printf("El realillo %f ocupa %lu bytes\n", irr, sizeof(float));
    printf("El real %lf ocupa %lu bytes\n", real, sizeof(double));
    return EXIT_SUCCESS;
}

