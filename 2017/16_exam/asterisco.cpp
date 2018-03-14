
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define N 0x100

int main(){
    char **lista = NULL;
    int lon;
    int numpal;
    char buffer[N];

    printf("Cuantas palabras quieres meter: ");
    scanf(" %i", &numpal);

    for(int c=0; c<numpal; c++){
        __fpurge(stdin);
        printf("Dime la palabra: ");
        fgets(buffer,N,stdin);

        lista = (char **) realloc(lista, c * sizeof(char *));

        lon = strlen(buffer);
        *(lista+c) = (char *) malloc(lon);
        strncpy(*(lista +c),buffer,lon);
        *(*(lista + c )+lon -1 ) = '\0';

    }
    for(int c=0; c<numpal; c++)
        printf("%s\n",*(lista+c));

    for(int c=0; c<numpal; c++)
        free(*(lista + c));
    free(lista);
    return EXIT_SUCCESS;
}
