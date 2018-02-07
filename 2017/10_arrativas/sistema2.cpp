
#include <stdio.h>
#include <stdlib.h>
#define L 3
#define N 4
void sistema(double a[L][N]){
    for(int f=0; f<L; f++){
        for(int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
        printf("\n");
    }
}
int main(){
    double a[L][N]{
        {2,5,3,12},
            {3,1,8,5},
            {1,3,2,7}
    };
    double x,
           y,
           z,
           k,
           coef[L];
    int p=0;
    sistema(a);
    printf("\n");
    for(int n=0; n<L; n++){
        coef[p++] = k = a[n][n];
        for(int c=0; c<N; c++)
            a[n][c]/=k;
        for(int f=n+1; f<L; f++){
            k= a[f][n];
                for(int c=0; c<N; c++)
                    a[f][c] -= (a[n][c]*k);
        }
        sistema(a);
        printf("\n");
    }
    z = a[2][3]/a[2][2];
    y = (a[1][3]-a[1][2]*z)/a[1][1];
    x = (a[0][3]-a[0][2]*z-a[0][1]*y)/a[0][0];
    printf("x = %.2lf y = %.2lf z = %.2lf\n", x,y,z);
    return EXIT_SUCCESS;
}
