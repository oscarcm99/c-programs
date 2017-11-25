
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0x10

int main(){
    char nombre[N] = "pepe";
    nombre[3]= 'a';
    printf(" %s\n", nombre);
    printf("Nombre ocupa: %Xh bytes\n", (int)sizeof(nombre));










   return EXIT_SUCCESS;

}
