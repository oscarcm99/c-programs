
#include <stdio.h>
#include <stdlib.h>
double sum(double *op1, double *op2){
	printf("Introduce dos numeros: ");
	scanf(" %lf %lf",op1,op2);
	return *(op1) + *(op2);
}
double res(double *op1, double *op2){
	printf("Introduce dos numeros: ");
	scanf(" %lf %lf",op1,op2);
	return *(op1) - *(op2);
}
double mul(double *op1, double *op2){
	printf("Introduce dos numeros: ");
	scanf(" %lf %lf",op1,op2);
	return *(op1) * *(op2);
}
double div(double *op1, double *op2){
	printf("Introduce dos numeros: ");
	scanf(" %lf %lf",op1,op2);
	return *(op1) / *(op2);
}
int main(){
	double *op1;
	double *op2;
	double(*op)(double *p, double *t);
	op = &res;
	(*op)(op1,op2);
	printf("resultado: %lf",(*op)(op1,op2));
	return EXIT_SUCCESS;
}
