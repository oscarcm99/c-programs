#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
int main(){
    char **l = NULL;
    char buffer[N];
    int longitud;

    printf("Dime tu nombre: ");
    //fgets(cadena,N,stdin); Tambien podría ser.
    scanf(" %[^\n]", buffer);
    longitud = strlen(buffer);

    l = (char **) malloc(sizeof(char *));
    *l = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(*l,buffer,longitud+1); //strcpy(direc,buffer);

    printf("Tu nombre: %s tiene %i caracteres\n", *l, longitud);
    free(*l);
    free(l);
    return EXIT_SUCCESS;
}
