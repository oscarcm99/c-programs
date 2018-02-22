
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
//leer nombres
//guardarlos en un array
int main(){
    char **lista = NULL;//los punteros siempre iguales a null
    char buffer[N];
    int lenght;
    while(){
        printf("Dime tu nombre: ");
        fgets(buffer,N,stdin);
        lenght = strlen(buffer);
        no_lo_se_ulio = (char *) malloc(lenght * sizeof(char));
        strncpy(no_lo_se_ulio,buffer,lenght-1);
        no_lo_se_ulio[lenght-1]='\0';
    }
    return EXIT_SUCCESS;
}
