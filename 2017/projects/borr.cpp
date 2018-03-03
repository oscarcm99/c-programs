
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#define N 0x100
int main(){
	char buffer[N];
	char **lista = NULL;
	int longitud,numpal;
        
	printf("Cuantos amigos tienes: ");
	scanf(" %i", &numpal);

	for(int conpal = 0; conpal<numpal; conpal++){
		__fpurge(stdin);
		printf("Nombre: ");
		fgets(buffer,N,stdin);

		lista = (char **) realloc(lista,(conpal+1)* sizeof (char *));

		longitud = strlen(buffer);
		*(lista + conpal)= (char *) malloc(longitud*sizeof(char));
		strncpy(*(lista+conpal), buffer, longitud);
		*(*(lista +conpal)+longitud-1)='\0';
	}

	for(int conpal = 0; conpal<numpal; conpal++)
		printf("%s\n",*(lista + conpal));
	for(int conpal=0; conpal<numpal; conpal++)
	        free(*(lista+conpal));
	free(lista);

	return EXIT_SUCCESS;
}
