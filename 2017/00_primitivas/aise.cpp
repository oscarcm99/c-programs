#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#define N 0xFF

int main(){
const char *p = "The world is";
char frase[N] = "a vampire";
char *d = frase;
d = &frase[2];

printf(" %s\n", p);
printf("El puntero d %c, ocupa %lu bytes\n", *d, sizeof(d));

return EXIT_SUCCESS;
}
