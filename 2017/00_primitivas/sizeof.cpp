#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0xFF
int main(){
    short int entero = 3;
    float semirreal = 3.14;
    double real = 3.1416;
    unsigned int unsig = 2;
    signed int sig = 1;
    char caracter = 'a';
    char string[N] = "hello bro";
    long int ho = 6; 

    printf("El entero %i ocupa %lu bytes\n", entero, sizeof(int));
    printf("El semirreal %f ocupa %lu bytes\n", semirreal, sizeof(float));
    printf("El real %lf ocupa %lu bytes\n", real, sizeof(double));
    printf("El valor sin signo %u ocupa %lu bytes\n", unsig, sizeof(int));
    printf("El valor con signo %i ocupa %lu bytes\n", sig, sizeof(int));
    printf("El caracter %c ocupa %lu bytes\n", caracter, sizeof(char));
    printf("La cadena de caracteres %s ocupa %lu bytes\n", string, sizeof(char));
    printf("El entero largo %li ocupa %lu bytes\n", ho, sizeof(int));
}
