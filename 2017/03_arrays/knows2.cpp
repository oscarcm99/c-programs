#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0xFF
int main(){
    char nombre[N] = {'p','e','p','e', '\0'};
    nombre[1] = 'i';
    nombre[3] = 'o';
    printf(" [%c]", nombre[0]);
    printf(" [%c]", nombre[1]);
    printf(" [%c]", nombre[2]);
    printf(" [%c]", nombre[3]);
    printf(" %c\n", nombre[4]);
    return EXIT_SUCCESS;
}
