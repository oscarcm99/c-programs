
#include <stdio.h>
#include <stdlib.h>
#define N 0xFF
int main(){
        char nombre[N];
        printf("Dime tu nombre primo: ");
        scanf(" %[^\n]", nombre);
        printf("Hola %s\n", nombre);


	return EXIT_SUCCESS;
}
