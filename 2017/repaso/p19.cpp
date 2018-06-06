
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 30023, mu = 112;
	FILE *fic; 
	if(!(fic = fopen("b.int", "w"))){
		fprintf(stderr,"No hay fichero b.int.\n");
		return EXIT_FAILURE;
	}
	fwrite(&numero,sizeof(int),1,fic);
	fwrite(&mu,sizeof(int),1,fic);
	fclose(fic);
	return EXIT_SUCCESS;
}
