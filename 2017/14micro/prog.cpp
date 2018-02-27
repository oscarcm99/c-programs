#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100

int main(){
    char buffer[N];
    char *direc = NULL;
    int longitud;
    bool ver = true;
  
    printf("Dime tu nombre: ");
    //fgets(cadena,N,stdin); Tambien podría ser.
    scanf(" %[^\n]", buffer);
    longitud = strlen(buffer);
    //printf("%i\n", longitud);
    direc = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(direc,buffer,longitud+1);
    printf("Tu nombre: %s tiene %i caracteres\n", direc, longitud);
    free(direc);
    return EXIT_SUCCESS;
}
