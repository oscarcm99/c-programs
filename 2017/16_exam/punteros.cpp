
#include <stdio.h>
#include <stdlib.h>

int main(){
double *reserva = NULL;
double num1 = 3.5;
double num2 = 7.8;

reserva = (double *) malloc(sizeof(double));
*reserva = num1;
reserva = (double *) realloc(reserva,2*sizeof(double));
*(reserva + 1) = num2;

free(reserva);
	return EXIT_SUCCESS;
}
