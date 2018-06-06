
#include <stdio.h>
#include <stdlib.h>
double sum(double *op1, double *op2){
	return (*op1) + (*op2);
}
double res(double *op1, double *op2){
	return (*op1) - (*op2);
}
double mul(double *op1, double *op2){
	return (*op1) * (*op2);
}
double div(double *op1, double *op2){
	printf("Introduce dos numeros: ");
	scanf(" %lf %lf",op1,op2);
	return (*op1) / (*op2);
}
int main(){
	double op1 = 2;
	double op2 = 3;
	double(*op)(double *p, double *t);
	op = &res;
	(*op)(&op1,&op2);
	printf("resultado: %.2lf\n",(*op)(&op1,&op2));
	return EXIT_SUCCESS;
}
