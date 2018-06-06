
#include <stdio.h>
#include <stdlib.h>

int main(){
        FILE *f;
        fpos_t posicion;
	f = fopen("a.txt","r+");
	fseek(f,100,SEEK_END);
	fsetpos(f,&posicion);
	printf("Posicion actual: %ld\n", ftell(f));
	fclose(f);
	return EXIT_SUCCESS;
}
