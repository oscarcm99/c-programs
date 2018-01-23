
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int a[N][N] ={
        {1,4,6},
        {7,2,5},
        {9,8,3}
    };
    for(int des=0; des<N; des++){
        for(int elem=0; elem<N; elem++)
            printf("%6i", a[elem%N][(des+elem)%N]);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
