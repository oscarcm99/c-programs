
#include <stdio.h>
#include <stdlib.h>
int mul =1;
int fac(int numero){
    mul *= numero;
    if(numero==1)
        return mul;
    if(numero == 0)
        return 1;
return fac(numero-1);
}
int main(){
         int numero,resultado;
         printf("Mete un numero para hacer un factorial: ");
         scanf(" %i",&numero);

         resultado = fac(numero);
         printf("Resultado de %i  = %i.\n", numero, resultado);
	return EXIT_SUCCESS;
}
