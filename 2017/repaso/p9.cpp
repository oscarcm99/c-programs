
#include <stdio.h>
#include <stdlib.h>
int mul =1;
int factorial(int num){
	mul *= num;
	if(num == 1)
		return mul;
	if(num <= 0)
		return 1;
	return factorial(num-1);
}
int main(){
        int numero,res;
	printf("Mete un numero: ");
	scanf(" %i",&numero);
	res = factorial(numero);
	printf("Resultado: %i\n",res);
	return EXIT_SUCCESS;
}
