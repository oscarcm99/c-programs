
#include <stdio.h>
#include <stdlib.h>

int main(){
        int numero = 0;
        while(numero <1  || numero >3){
            printf("Dime un número del 1 al 3: ");
            scanf(" %i", &numero);

        }
	return EXIT_SUCCESS;
}
