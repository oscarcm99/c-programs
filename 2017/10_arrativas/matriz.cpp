
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    int a[N][N]={
        {7,3,7},
        {2,6,8},
        {5,9,3}
    };
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%4i",a[f][c]);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
