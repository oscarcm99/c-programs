
#include <stdio.h>
#include <stdlib.h>
#define L 2
#define N 3
void sist(double a[N][N]){
    printf("\n");
    for(int f=0; f<L; f++){
        for(int c=0; c<N; c++)
            printf("%6.1lf", a[f][c]);
        printf("\n");
    }
}
int main(){
    double a[L][N],
    coef[L],
    k,
    x,
    y;
    int celda=0;
     

    printf("Dime lo que multiplica a x: ");
    scanf(" %lf", &a[0][0]);
    printf("Dime lo que multiplica a y: ");
    scanf(" %lf", &a[0][1]);
    printf("Dime el resultado de la primera ecuación: ");
    scanf(" %lf", &a[0][2]);
    printf("Dime lo que multiplica a x: ");
    scanf(" %lf", &a[1][0]);
    printf("Dime lo que multiplica a y: ");
    scanf(" %lf", &a[1][1]);
    printf("Dime el resultado de la segunda ecuación: ");
    scanf(" %lf", &a[1][2]);



    sist(a);
    for(int n=0; n<L; n++){
        coef[celda++] = k = a[n][n];
        for(int col=0; col<N; col++)
            a[n][col] /= k;
        for(int f=n+1; f<L; f++){
            k = a [f][n];
            for(int col=0; col<N; col++)
                a[f][col] -= (a[n][col]*k);
        }
        sist(a);
        printf("\n");
    }
    y= a[1][2] / a[1][1];
    x = (a[0][2] - y *a[0][1])/a[0][0];
    printf("x = %.2lf y = %.2lf\n", x,y);
}
