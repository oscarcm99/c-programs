
#include <stdio.h>
#include <stdlib.h>
#define N 0xFF
int main(){
        char nombre[N],
             apellidos[N],
             dni[N],
             direccion[N];
        int  numero;
        /*Entrada de datos*/
        printf("Dime tu nombre: ");
        scanf(" %[^\n]", nombre);
        printf("Dime tus apellidos: ");
        scanf(" %[^\n]", apellidos);
        printf("Dime tu DNI: ");
        scanf(" %[^\n]", dni);
        printf("Dime tu direccion: ");
        scanf(" %[^\n]", direccion);
        printf("En que numero vives: ");
        scanf(" %i", &numero);
        /*Salida de datos*/
        printf("Hola %s %s, has quedado registrado en nuestra BBDD con el DNI %s y tu direccion es %s numero %i\n", nombre, apellidos, dni, direccion, numero);


	return EXIT_SUCCESS;
}
