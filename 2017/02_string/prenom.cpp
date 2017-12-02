#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0xFF
int main (){
    char name[N],
         apellidos[N],
         dni[N],
         direccion[N];
    int  numero;     
    printf("Dime tu nombre: ");
    scanf(" %[^\n]", name);
    printf("Dime tus apellidos:  ");
    scanf(" %[^\n]", apellidos);
    printf("Introduce tu DNI: ");
    scanf(" %[^\n]", dni);
    printf("En que calle vives: ");
    scanf(" %[^\n]", direccion);
    printf("Y el número: ");
    scanf(" %i", &numero);

    printf(" Hola %s %s has quedado registrado en nuestra BBDD con DNI %s, en la calle %s número %i\n ", name, apellidos, dni, direccion, numero);
}
