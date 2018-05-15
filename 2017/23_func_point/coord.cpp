
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
#define MAX 10
typedef struct{
	double x;
	double y;
}Coord;
typedef struct{
	Coord vel;
	Coord pos;
	Coord acc;
	void(*funcion)(Coord *vel, Coord *pos, Coord *acc);
}Cosa;
typedef struct{
        Cosa data[MAX];
	int cima;
}Pila;
bool push(Cosa cosa, Pila *pila){
	if(pila->cima >= MAX)
		return false;
	pila->data[pila->cima++] = cosa;
	return true;
}
Cosa pop(Pila *pila){
	if(pila->cima == 0){
	return Cosa();
	}
	return pila->data[--pila->cima];
}

void coordx(Coord *vel, Coord *pos, Coord *acc){
	(*vel).x += (*acc).x;
	(*pos).x += (*vel).x;
}
void coordy(Coord *vel, Coord *pos, Coord *acc){
	(*vel).y += (*acc).y;
	(*pos).y += (*vel).y;
}
int main(){
   int veces = 0;
   Pila pila;
   pila.cima = 0;
   Cosa uno = {{1.,3.},{0.5,1.3},{0.,-9.8},coordy},
	dos = {{1.4,2.1},{0.4,1.1},{0.,-9.8},coordx},
	tres = {{1.2,3.3},{0.1,0.9},{0.,-9.8},coordx},
	cuatro = {{1.3,4.5},{0.7, 0.3},{0.,-9.8},coordy};
   push(uno, &pila);
   push(dos, &pila);
   push(tres, &pila);
   push(cuatro, &pila);


   while(veces<4){
   Cosa cosa = pop(&pila);
   cosa.funcion(&cosa.vel, &cosa.pos, &cosa.acc);
   printf("\t %.2lf | %.2lf\n", cosa.pos.x, cosa.pos.y);
   veces++;
   }
   return EXIT_SUCCESS;
}
