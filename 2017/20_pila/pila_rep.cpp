
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct{
	double x;
	double y;
}Coord;
typedef struct{
	Coord vel;
	Coord pos;
	Coord acc;
	void(*imp)();
}Objeto;

typedef struct{
	Objeto data[MAX];
	int cima;
}Pila;
bool push(Objeto dato,Pila *pila){
	if(pila->cima>=MAX)
		return false;
	pila->data[pila->cima++];
	return true;
}
Objeto pop(Pila *pila){
	if(pila->cima == 0){
		return Objeto();
	}
	return pila->data[--pila->cima];
}
void one(){
	printf("Menudo pozo.\n");
}
void two(){
	printf("Adioooos.\n");
}
int main(){
	Pila pila;
	pila.cima =0;
	Objeto ob1 = {{2,1},{1,1},{0,0},two},
	       ob2 = {{3,0},{0,1},{2,2},one}, 
	       ob3 = {{1,2},{2,2},{0,1},two};
	int veces =0;
	push(ob1,&pila);
	push(ob2,&pila);
	push(ob3,&pila);

	while(veces<3){
		Objeto cosa = pop(&pila);
		veces++;
	}
	return EXIT_SUCCESS;
}
