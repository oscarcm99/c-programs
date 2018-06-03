
#include <stdio.h>
#include <stdlib.h>

int main(){
        int numero = 333;
	FILE *p = fopen("b.int","w");
	fwrite(&numero,sizeof(int),1,p);
	fclose(p);
	return EXIT_SUCCESS;
}
