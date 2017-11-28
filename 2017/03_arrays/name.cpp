#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#define N 0x100

int main(){
    char nombre[N],
         apellidos[N];
    printf("Dime tu nombre: ");
    fgets(nombre, N, stdin);
    printf("Dime tus apellidos: ");
    fgets(apellidos, N, stdin);
    printf("Hola %s%s", nombre, apellidos);


    return EXIT_SUCCESS;





}
