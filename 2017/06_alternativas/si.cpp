
#include <stdio.h>
#include <stdlib.h>
int main(){
        int numero;
        printf("Dime un numero: ");
        scanf(" %i", &numero);
        if (numero % 2 == 0){
            printf("El numero %i es par\n", numero);
        }else
            printf("El numero %i es impar\n", numero);
        
	return EXIT_SUCCESS;
}
