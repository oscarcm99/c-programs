
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
int main(){
        FILE *a;
	int contador = 0;
        char *palabra = NULL, an[N];
	if(!(a = fopen("a.txt","r+"))){
	fprintf(stderr,"No hay fichero a.txt\n");
		return EXIT_FAILURE;
	}
	while(fscanf(a," %s",an) == 1){
		contador++;
		palabra = an;
	}
	printf("Hay %i palabras\n",contador);
	for(int i=0; i<contador; i++)
		printf(" %c\n", *(palabra+i));
	fclose(a);
	return EXIT_SUCCESS;
}
