#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#define N 0x100

int main(){
    char nombre[N] = "oscar";
    char *p;
    p = &nombre[0];
    printf("El puntero p %c de %s ocupa %lu bytes\n", *p, nombre, sizeof(p));

    return EXIT_SUCCESS;
}
