#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
int main(){
    char **l = NULL;
    char buffer[N];
    int longitud;

    printf("Dime tu nombre: ");
    scanf(" %[^\n]", buffer);
    longitud = strlen(buffer);

    l = (char **) malloc(sizeof(char *));
    *l = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(*l,buffer,longitud+1); //strcpy(direc,buffer);

    printf("Dime tu nombre: ");
    scanf(" %[^\n]", buffer);
    longitud = strlen(buffer);

    l = (char **) realloc(l, 2*sizeof(char *));
    *(l+1) = (char *) malloc((longitud +1) * sizeof(char));
    strncpy(*(l+1), buffer, longitud+1);

    printf("Tu nombre: %s \n", *l);
    printf("Tu nombre: %s \n", *(l+1));
    free(*l);
    free(*(l+1));
    free(l);
    return EXIT_SUCCESS;
}
