#include <stdio.h>
#include <stdlib.h>
#define N 0xFF

int main(){
    char cadena[N] = "Hello World";
    char *p;
    p = &cadena[2+5];
    
    printf("El puntero p %c\n", *p);
    printf("%c\n", cadena[0]); 
    printf("%c\n", cadena[1]); 
    printf("%c\n", cadena[2]); 
    printf("%c\n", cadena[3]); 
    printf("%c\n", cadena[4]);
    return EXIT_SUCCESS;
}
