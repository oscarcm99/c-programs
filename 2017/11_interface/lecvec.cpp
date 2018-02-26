
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
int main(){
	bool l= true;
	char frase[N];
	int dato;
	double *a = NULL;
	for (int i=1; l; i++){
		a = (double *) realloc (a, i*sizeof(double));
		*(a+i-1)=i;
	}
	fgets(frase,N,stdin);
	sscanf(frase, "%i", &dato);
	return EXIT_SUCCESS;
}
