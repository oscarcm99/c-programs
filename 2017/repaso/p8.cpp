
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	FILE *p = fopen("b.int","r");
	fread(&n,sizeof(int),1,p);
	printf("Numero leido: %i, Hex: %X\n",n,n);
	fclose(p);
	return EXIT_SUCCESS;
}
