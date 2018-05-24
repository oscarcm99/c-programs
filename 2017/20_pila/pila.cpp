
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
#define DEBUG(...) printf(__VA_ARGS__);

typedef struct{
    int data[N];
    int cima;
}Pila;

void push(int numero, Pila *posicion){
    DEBUG("PUSH-> %5i\n", numero);
    posicion->data[posicion->cima] = numero;
    posicion->cima++;
}
int pop(Pila *posicion){
    posicion->cima--;
    DEBUG("POP<- %5i\n", posicion->data[posicion->cima]);
    return posicion->data[posicion->cima];
}
int main(){
    Pila posicion;
    posicion.cima = 0;
    push(5,&posicion);
    push(2,&posicion);
    push(3,&posicion);
    pop(&posicion);
    pop(&posicion);
    return EXIT_SUCCESS;
}
