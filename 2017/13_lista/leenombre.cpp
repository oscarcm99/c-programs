
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
//leer nombres
//guardarlos en un array
char *leenombre(){
	char buffer[N];
	int lenght;
	char *algunsitio = NULL;
	printf("Dime tu nombre: ");
	fgets(buffer,N,stdin);
	lenght = strlen(buffer);
	algunsitio = (char *) malloc (lenght * sizeof(char));
	strncpy(algunsitio,buffer,lenght-1);
	algunsitio[lenght-1] = '\0';

	return algunsitio;
}
int main(){
	char **lista = NULL;//los punteros siempre iguales a null
	bool ap = true;
	while(ap){
		ap = false;
		algunsitio = leenombre();
	}
	free(algunsitio);
	return EXIT_SUCCESS;
}
