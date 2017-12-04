#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0xFF
int main(){
    int lista[N];
    bzero(lista, sizeof(lista));
    memset(lista + 0, 4, 1 );
    printf(" %i", lista[0]);
    printf(" %i", lista[1]);
    printf(" %i", lista[2]);
    printf(" %i", lista[3]);
    printf(" %i", lista[4]);
    printf(" \n");
}
