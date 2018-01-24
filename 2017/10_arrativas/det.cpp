
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int suma = 0;
    int a[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int f=0; f<N; f++){
        int diag = 1;
        for(int c=0; c<N; c++)
            diag *= a[c][(f+c)%N];
            printf("diagonal = %i\n", diag);
            suma += diag;
    }
    for (int f=0; f<N; f++){
        int diag = 1; 
        for(int c=0; c<N; c++)
            diag *= a[(c+f)%N][N-1-c];
        printf("diagonal = %i\n", diag);
        suma -= diag;
    }
    printf("Determinante = %i\n", suma);
    return EXIT_SUCCESS;
}
