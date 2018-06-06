
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
#define MAX 10
typedef struct{
	int x;
	int y;
}Coord;
typedef struct{
	Coord vel;
	Coord pos;
	Coord acc;
	void (*funcion)(Coord *vel, Coord *pos, Coord *acc);
}Objeto;
typedef struct{
	Objeto data[MAX];
	int cima;
}Pila;
bool push(Objeto objeto, Pila *pila){
	if(pila->cima >= MAX)
		return false;
	pila->data[pila->cima++] = objeto;
	return true;
}
Objeto pop(Pila *pila){
	if(pila->cima == 0)
		return Objeto();
	return pila->data[--pila->cima];
}
void uno(Coord *vel, Coord *pos, Coord *acc){
	(*vel).x += (*acc).x;
	(*pos).x += (*vel).x;
}
void dos(Coord *vel, Coord *pos, Coord *acc){
	(*vel).y += (*acc).y;
	(*pos).y += (*vel).y;
}

int main(){
	Pila pila;
	pila.cima = 0;
	int veces =0;
	Objeto one = {{1,1},{2,1},{0,1},&uno},
	       two = {{1,1},{0,2},{0,3},dos},
	       three = {{1,1},{2,3},{1,2},dos},
	       four = {{1,2},{3,4},{2,5} ,uno};
	push(one,&pila);
	push(two,&pila);
	push(three,&pila);
	push(four,&pila);

	while(veces<4){
		Objeto objeto = pop(&pila);
		objeto.funcion(&objeto.vel, &objeto.pos,&objeto.acc);
		printf(" %i, %i\n",objeto.pos.x,objeto.pos.y);
		veces++;
	}
	return EXIT_SUCCESS;
}
