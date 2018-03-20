
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
    int num = 0;
    printf("\n\t______________________________________________________________\n");
    printf("\n");
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            if(c<8)
                printf("\t  %c   |", a[f][c]);
        if(f<8)
            printf("\n\t______________________________________________________________\n");
        printf("\n");
    }
    a[3][3] ='O';
    a[3][4] ='X';
    a[4][3] ='X';
    a[4][4] ='O';
}
int main(){
        char a[N][N];
        introducir(a);
        pintar_matriz(a);
	return EXIT_SUCCESS;
}
