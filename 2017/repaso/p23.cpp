
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define MAX 0x100
typedef struct{
	int data[MAX];
	int cima;
}Pila;
bool push(Pila *pila,int dato){
	if(pila->cima >=MAX)
		return false;
	pila->data[pila->cima++] = dato;
	return true;
}
int pop(Pila *pila){
	if(pila->cima<0)
		return 0;
	return pila->data[--pila->cima];
}
double frac(int *den, int cima, int cantidad_numeros){
           if(cantidad_numeros == cima -1)
		   return den[cantidad_numeros];
	   return den[cantidad_numeros] + 1./ frac(den,cima,cantidad_numeros+1);
}
int main(){
        Pila denominador;
	int numero;
	bzero(&denominador,sizeof(denominador));

	do{
		printf("Introduce denominador: ");
		scanf(" %i",&numero);
		if(numero!=0)
			push(&denominador,numero);
	}while(numero!=0);
	printf("Resultado de la fraccion continua = %.2lf\n", frac(denominador.data,denominador.cima,0));
	return EXIT_SUCCESS;
}
