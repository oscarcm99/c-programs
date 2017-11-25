#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#define N 0xFF

int main(){
    char nombre[N];
    printf("Dime tu nombre: ");
    fgets(nombre, N, stdin);
    printf("Hola %s", nombre);



    return EXIT_SUCCESS;





}
