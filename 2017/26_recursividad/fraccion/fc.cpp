
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pila.h"

double fc(int *coef, int cima, int num_coef){
	if(num_coef == cima -1)
		return coef[num_coef];
	return coef[num_coef] + 1. / fc(coef,cima,num_coef+1);
}
int main(){
	Pila coef;
	int num;

	bzero(&coef,sizeof(coef));

	do{
		printf("Coeficiente: ");
		scanf(" %i", &num);
		if(num>0)
			push(&coef,num);
	}while(num>0);
	printf("%.2lf\n",fc(coef.data,coef.cima,0));
	return EXIT_SUCCESS;
}
