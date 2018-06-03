
#include <stdio.h>
#include <stdlib.h>
double sum(double op1, double op2){return op1 + op2;}
double res(double op1, double op2){return op1 - op2;}
double mul(double op1, double op2){return op1 * op2;}
double div(double op1, double op2){return op1 / op2;}
int main(){
        double(*op)(double,double);
	op = &res;
	printf("resultado: %lf", (*op)(5,6));
	return EXIT_SUCCESS;
}
