
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int a[N][N];
    int suma = 0;
    int num=1;
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++){
            printf("Mete el %iº numero: ", num++);
            scanf(" %i", &a[f][c]);
        }
    }
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i",a[f][c]);
        printf("\n");
    }
    for(int f=0; f<N; f++){
        int diagonal = 1;
        for(int c=0; c<N; c++)
            diagonal *= a[c][(c+f)%N];
        suma += diagonal;
    }
    for(int f=0; f<N; f++){
        int diagonal = 1;
        for(int c=0; c<N; c++)
            diagonal *= a[(f+c)%N][N-1-c];
        suma -= diagonal;
    }
    printf("El resultado del determinante es = %i\n", suma);
    return EXIT_SUCCESS;
}
