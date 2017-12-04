

#include <stdio.h>
#include <stdlib.h>
#define N 0x10
int main(){

        char nombre[N];
        int num;
        char hxdec[N];

        /*ENTRADA DE DATOS*/
        printf("Entero: ");
        scanf(" %i", &num);
        printf("Nombre: ");
        scanf(" %s", nombre);

        /*SALIDA DE DATOS*/
        printf("[%i] => %s.\n", num, nombre);

        /*ENTRADA DE DATOS*/
        printf("Hexadecimal: ");
        scanf(" %[0123456789abcdefABCDEF]", hxdec);

        /*SALIDA DE DATOS*/
        printf("0x%sh\n", hxdec);
	    return EXIT_SUCCESS;
}
