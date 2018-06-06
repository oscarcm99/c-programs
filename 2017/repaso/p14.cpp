
#include <stdio.h>
#include <stdlib.h>
void normal(char *letra){
	printf(" %c ", *letra);
	if(*letra != '\0')
	  normal(letra+1);
}
void reves(char *letra){
	if(*(letra+1) != 0)
		reves(letra+1);
	printf(" %c ",*letra);
}
int main(){
        char frase[] = "Pako Sanz preso politico";
	char *letra;
	letra = frase;
	normal(letra);
	printf("\n");
	reves(letra);
	printf("\n");
	return EXIT_SUCCESS;
}
