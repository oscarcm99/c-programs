
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define N 0x100

int main(){
	char buffer1[N];
	char buffer2[N];
	int len1;
	int len2;
	int numpal;
	char **lista1 = NULL;
	char **lista2 = NULL;

	printf("Quiero saber el nombre y los apellidos de tus amigos. ¿Cuantos amigos tienes?: ");
	scanf(" %i", &numpal);

	for( int conpal=0; conpal<numpal; conpal++){
		__fpurge(stdin);
		printf("Dime el nombre: ");
		fgets(buffer1,N,stdin);
		printf("Dime los apellidos: ");
		fgets(buffer2,N,stdin);
                //agrandar los dos punteros a las palabras que hay
		lista1 = (char **) realloc(lista1, conpal * sizeof(char *));
		lista2 = (char **) realloc(lista2, conpal * sizeof(char *));
		//crear las palabras
		len1 = strlen(buffer1);
		len2 = strlen(buffer2);
		*(lista1 + conpal) = (char *) malloc(len1);
		*(lista2 + conpal) = (char *) malloc(len2);
		strncpy(*(lista1 + conpal), buffer1, len1);
		strncpy(*(lista2 + conpal), buffer2, len2);
		*(*(lista1 + conpal)+ len1 -1) = '\0';
		*(*(lista2 + conpal)+ len2 -1) = '\0';
	}

	for(int conpal=0; conpal<numpal; conpal++)
		printf("Tu amigo es: %s %s\n", *(lista1 + conpal), *(lista2 + conpal));
	for(int conpal=0; conpal<numpal; conpal++){
	free(*(lista1 + conpal));
	free(*(lista2 + conpal));
	}

	return EXIT_SUCCESS;
}
