
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct{
	int data[MAX];
	int cima;
}Pila;
bool push(int numero, Pila *pila){
	if(pila->cima >= MAX)
		return false;
	pila->data[pila->cima++] = numero;
	return true;
}

int pop(Pila *pila){
if(pila->cima <= 0)
	return -999;
return pila->data[--pila->cima];
}
int main(){
	Pila pila;
	pila.cima = 0;
	int veces,numero;

	do{
	printf("Cuantos numeros quieres empujar: ");
	scanf(" %i", &veces);
	}while(veces<0 || veces>MAX);

	for(int i = 0; i<veces; i++){
		printf("Introduce numero: ");
		scanf(" %i", &numero);
		push(numero,&pila);
		printf("%i\n", numero);
	}

	for(int i=0; i<veces; i++)
		printf("%i\n",pop(&pila));

	return EXIT_SUCCESS;
}
