#include <stdlib.h>
#include <stdio.h>
#define N 0xFF
int main(){
    const  char *s = "kkhdoushla";
    char nombre[N] = "ramon";
    char *p;

    p = &nombre[2];
    

    printf("La cadena de caracteres %s ocupa %lu bytes\n", s, sizeof(char));
    printf("%c ocupa %lu bytes\n", *p, sizeof(p));
    return EXIT_SUCCESS;
}
