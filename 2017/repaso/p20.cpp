
#include <stdio.h>
#include <stdlib.h>

int main(){
        int num, mu;
	FILE *pf;
	if(!(pf = fopen("b.int","r"))){
		fprintf(stderr,"No hay fichero de entrada\n");
		return EXIT_FAILURE;
	}
        fread(&num, sizeof(int), 1,pf);
	fread(&mu, sizeof(int),1,pf);
	printf(" %i,  %i\n",num,mu);
	fclose(pf);
	return EXIT_SUCCESS;
}
