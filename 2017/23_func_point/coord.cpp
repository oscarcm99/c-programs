
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
#define MAX 10
typedef struct {
    double x;
    double y;
}Coord;
typedef struct {
    Coord vel;
    Coord pos;
    Coord acc;
    void(*haz)(Coord *vel, Coord *pos, Coord *acc);
} Movil;
typedef struct{
    Movil data[MAX];
    int cima;
} Pila;

bool push(Movil dato, Pila *pila){
    if(pila->cima >= MAX){
        return false;
    }
    pila->data[pila->cima++]=dato;
    return true;
}

Movil pop(Pila *pila){
    if(pila->cima == 0){
        return Movil();
    }
    return pila->data[--pila->cima];
}

void one(Coord *vel, Coord *pos, Coord *acc){
    (*vel).x += (*acc).x;
    (*pos).x += (*vel).x;
}

void two(Coord *vel, Coord *pos, Coord *acc){
    (*vel).x += (*acc).x;
    (*pos).x += (*vel).x;
}


int main(){
    int veces = 0;
    Pila pila;
    pila.cima = 0;
    Movil movil1 = {{0,0},{2,5},{0,0},one}, movil2 {{0,0},{1,2},{0,0},one}, movil3 {{0,0},{3,5},{0,0},two}, movil4 {{0,0},{5,1},{0,0},two};

    push(movil1,&pila);
    push(movil2,&pila);
    push(movil3,&pila);
    push(movil4,&pila);

    while(veces<4){
        Movil movil = pop(&pila);
        movil.haz(&movil.vel, &movil.pos, &movil.acc);
        printf(" %.2lf, %.2lf\n", movil.pos.x,movil.pos.y);
        veces++;
    }
    return EXIT_SUCCESS;
}
