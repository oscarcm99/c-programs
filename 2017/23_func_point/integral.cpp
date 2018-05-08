
#include <stdio.h>
#include <stdlib.h>
#define P 0.001

double parabola(double x){
    return x * x;
}
double otrafun(double x){
    return 2x + 5;
}
double integra(double li, double ls, double(*funcion)(double)){
    double res;
    res = 0.;
    for(double x = 0; x<ls; x+=P)
        res += (*funcion)(double);
}

int main(){

	return EXIT_SUCCESS;
}
