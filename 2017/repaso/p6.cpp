
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *p;
	int vez = 0;
	char letra, caracter;

	printf("Mete un caracter: ");
	scanf(" %c",&caracter);

	p = fopen("a.txt","r");
	do{
		if(fgetc(p) == caracter)
			++vez;
	}while((letra = fgetc(p)) != EOF);
	printf("Hay %i %c´s\n",vez,caracter);
	fclose(p);

	return EXIT_SUCCESS;
}
