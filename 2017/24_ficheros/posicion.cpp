
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fichero;
    fpos_t posicion;
    fichero = fopen("macbeth.txt","w");
    fseek(fichero,1000, SEEK_CUR);
    fsetpos(fichero,&posicion);
    printf("Posicion actual: %ld\n",ftell(fichero));
    fclose(fichero);
	return EXIT_SUCCESS;
}
