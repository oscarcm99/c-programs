
#include <stdio.h>
#include <stdlib.h>
#define P 0.0005

double parabola(double x){
    return x * x;
}
double otrafun(double x){
    return 2x + 5;
}
double integra(double li, double ls, double(*funcion)(double)){
    int res;
    res = 0.;
    for(double x = 0; x<ls; x+=P)
        res += (*funcion)(double);
    return res * P;
}

int main(){
    printf("Integral = %.2lf\n", integra(0.,4.,&parabola));
	return EXIT_SUCCESS;
}
