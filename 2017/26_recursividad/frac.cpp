
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int ini = 0, i=0;
double sum = 0;
double suma(double a[MAX]){
	if(a[i] == 0)
		return EXIT_FAILURE;
	if(i>=MAX)
		return sum;
	sum += a[i++] + 1/a[i];

	return suma(a);
}
int main(){
	double a[MAX], resultado;

	for(int i=0; i<MAX; i++){
		printf("Introduce numeros: ");
		scanf(" %lf",&a[i]);
	}
	resultado = suma(a);
	printf("Resultado = %lf.\n",resultado);
	return EXIT_SUCCESS;
}
