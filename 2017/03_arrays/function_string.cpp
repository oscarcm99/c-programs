#include <stdio.h>
#include <stdlib.h>
#define N 0x100 

int main(){
    const char *p = "The world is"; //constante tipo cadena
    /*pequeña leccion sobre punteros
     char const *p; // Puntero a una constante. Forma coherente de decir que es un puntero
     char * const p; // Puntero constante (fijo)
     char const * const p; //Puntero fijo a una constante
    */

    // puntero: Es una variable que contiene una direccion de memoria

    char frase[N] = "a vampire\n"; //inicializacion
    char *d = frase;

    d = &frase[2];
    
    frase[2] == 'v'; //notacion de matrices.
    *d == 'v'; //notación de punteros.
    *(d+2) == 'm'; // El 2 esta en la aritmética de punteros.
    *d + 2 == 'x'; // El valor de lo que apunta d+2.
    printf(" d ocupa %lu bytes.\n", sizeof(d));








   return EXIT_SUCCESS;

}
