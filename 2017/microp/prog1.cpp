
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
int main(){
        char buffer[N];
        char *bolsa = NULL;
        int lenght;

        printf("Dime tu nombre: ");
        fgets(buffer,N,stdin);
        lenght = strlen(buffer);
        bolsa = (char *) malloc(lenght  * sizeof(char));
        strncpy(bolsa,buffer,lenght-1);
        bolsa[lenght -1] = '\0';
        printf("Tu nombre: %s que tiene %i caracteres\n", bolsa, lenght-1);
        free(bolsa);
	return EXIT_SUCCESS;
}
