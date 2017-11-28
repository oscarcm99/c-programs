

#include <stdio.h>
#include <stdlib.h>

int main(){

        char nombre[16];
        int num;
        char hxdec[16];

        /*ENTRADA DE DATOS*/
        printf("Entero: ");
        scanf(" %i", &num);
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
