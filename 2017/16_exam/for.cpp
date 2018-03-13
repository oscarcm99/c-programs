
#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
    double a[N] = {1,2,1};
    double b[N] = {1,2,0};
    double suma = 0;

    for(int f=0; f<N; f++){
        double mul =1;
        mul = a[f] * b[f];
        suma += mul;
    }
printf("La suma = %lf\n",suma);
    return EXIT_SUCCESS;
}
