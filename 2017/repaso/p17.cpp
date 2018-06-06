
#include <stdio.h>
#include <stdlib.h>
int  numdiv(int dividendo, int divisor){
	if(dividendo == 0)
		return 0;
	if(dividendo % divisor == 0)
		printf("Divisor: %i\n", divisor);
	return numdiv(dividendo,divisor-1);
}
int main(){
	int dividendo;
	int divisor;
        printf("Mete un numero: ");
	scanf(" %i",&dividendo);
	divisor = dividendo -1;
	numdiv(dividendo,divisor);
	return EXIT_SUCCESS;
}
