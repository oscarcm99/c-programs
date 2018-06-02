
#include "pila.h"

void push(Pila *pila, int dato){
	pila->data[pila->cima++] = dato;
}
int pop(Pila *pila){
	if(pila->cima<0)
		return 0;
	return pila->data[--pila->cima];
}
