
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define MAX 0x20
typedef struct{
	int data[MAX];
	int cima;
}Pila;
void push(Pila *pila, int dato){
	pila->data[pila->cima++] = dato;
}
int pop(Pila *pila){
	if(pila->cima <0)
		return 0;
	return pila->data[--pila->cima];
}
double fraccion(int *coef, int cima, int cantidad){
	if(cantidad == cima-1)
		return coef[cantidad];
	return coef[cantidad] + 1./ fraccion(coef,cima,cantidad+1);
}
int main(){
	Pila frac;
	int num;
	bzero(&frac,sizeof(frac));

	do{
		printf("Numero: ");
		scanf(" %i",&num);
		if(num>0)
			push(&frac,num);
	}while(num>0);
	printf(" %.2lf\n", fraccion(frac.data,frac.cima,0));

	return EXIT_SUCCESS;
}
