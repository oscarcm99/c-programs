#ifndef __PILA_H__
#define __PILA_H__
#define MAX 0x20
typedef struct{
	int data[MAX];
	int cima;
}Pila;

#ifdef _cpp
extern "C"{
#endif
	void push(Pila *pila, int dato);
	int pop(Pila *pila);
#ifdef __cpp
}
#endif
#endif
