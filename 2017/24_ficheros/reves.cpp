
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    FILE *pf = fopen("b.int","r");

    fread(&numero,sizeof(int),1,pf);
    printf("Numero leido: %i\nHexadecimal: 0x%X\n", numero, numero);

    fclose(pf);
	return EXIT_SUCCESS;
}
