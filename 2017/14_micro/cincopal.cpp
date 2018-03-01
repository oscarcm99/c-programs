
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
int main(){
    int numpalabras;
    int lenght;
    char buffer[N];
    char **lista = NULL;

    printf("Cuantos nombres quieres meter: ");
    scanf(" %i", &numpalabras);
    for(int c_palabras = 0; c_palabras<n_palabras; c_palabras++){
        //Pedimos los nombres al usuario
        printf("Nombre: ");
        fgets(buffer,N,stdin);
       //Agrandamos la lista
       lista = (char **) realloc(lista,c_palabras * sizeof(char *));
       //crear una palabra en una posicion de la lista
       lenght = strlen(buffer);
       *(lista + c_palabras-1) = (char *) malloc(lenght);
    }

    return EXIT_SUCCESS;
}
