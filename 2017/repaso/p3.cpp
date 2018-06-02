
#include <stdio.h>
#include <stdlib.h>
#define MAX 0x100
typedef struct{
	double data[MAX];
	int cima;
}Pila;
bool push(double dato, Pila *pila){
	if(pila->cima >= MAX)
		return false;
	pila->data[pila->cima++] = dato;
	return true;
}
double pop(Pila *pila){
	if(pila->cima <=0)
		return 0.;
	return pila->data[--pila->cima];
}
int main(){
	Pila pila;
	pila.cima = 0;
	int t,n;
	double numero;
	printf("Cuantos numeros quieres empujar a la pila: ");
	scanf(" %i", &t);
	for(int i=0; i<t; i++){
		printf("Mete el numero: ");
		scanf(" %lf", &numero);
		push(numero,&pila);
	}
	printf("Cuantos numeros quieres quitar de la pila: ");
	scanf(" %i",&n);
	for(int i=0; i<n; i++)		
		printf(" %lf.\n", pop(&pila));
	return EXIT_SUCCESS;
}
