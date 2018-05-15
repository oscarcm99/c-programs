
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define N 0x100
int main(){
	int numpalabras;
	int lenght;
	char buffer[N];
	char **lista = NULL;

	printf("Cuantos nombres quieres meter: ");
	scanf(" %i", &numpalabras);
	for(int c_palabras = 0; c_palabras<numpalabras; c_palabras++){
		__fpurge(stdin);
		//Pedimos los nombres al usuario
		printf("Nombre: ");
		fgets(buffer,N,stdin);
		//Agrandamos la lista
		lista = (char **) realloc(lista,c_palabras * sizeof(char *));
		//crear una palabra en una posicion de la lista
		lenght = strlen(buffer);
		*(lista + c_palabras) = (char *) malloc(lenght);
		strncpy(*(lista + c_palabras), buffer, lenght);
		*(*(lista+c_palabras) + lenght - 1) = '\0';
	}

	for(int c_palabras=0; c_palabras<numpalabras; c_palabras++)
		printf("%s\n", *(lista + c_palabras));
	for(int c_palabras=0; c_palabras<numpalabras; c_palabras++)
		free(*(lista + c_palabras));

	free(lista);

	return EXIT_SUCCESS;
}
