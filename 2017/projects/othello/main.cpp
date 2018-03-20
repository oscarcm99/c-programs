
#include <stdio.h>
#include <stdlib.h>
#define N 8

void introducir(char a[N][N]){
    char relleno = '\0';
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            a[f][c] = relleno;
    }
}
void pintar_matriz(char a[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            if(c<7)
                printf(" %c |", a[f][c]);
            else
                printf(" %c ", a[f][c]);
        if(f<7)
            printf("\n--------------------------------\n");
        printf("\n");
    }
}
int main(){
        char a[N][N];
        introducir(a);
        pintar_matriz(a);
	return EXIT_SUCCESS;
}
