
#include <stdio.h>
#include <stdlib.h>
int mul = 1;
int fac(int num){
	mul*=num;
	if(num == 1)
		return mul;
	if(num == 0)
		return 0;
	return fac(num-1);
}
int main(){
        int num;
	printf("Mete un numero: ");
	scanf(" %i",&num);
	printf("Resultado = %i\n",fac(num));
	return EXIT_SUCCESS;
}
