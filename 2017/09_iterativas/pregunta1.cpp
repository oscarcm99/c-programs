
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#define MAX 3

int main(){
        int numero;
        int oportunidad = MAX;
        do{
            __fpurge(stdin);
            printf("Dime un número del 1 al 3: ");
            scanf(" %i", &numero);
            oportunidad--;
        } while ( (numero<1 || numero>3) && oportunidad );
	return EXIT_SUCCESS;
}
