
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define J1 'X'
#define J2 'O'
void inicio(){
    system("clear");
    system("\ttoilet -fpagga REVERSI");
}
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
}
void usuario(char a[N][N]){
    int f,c,k;
    do{
        printf("Mete las coordenadas: ");
        scanf(" %i, %i", &f,&c);
        for(int fila=0; fila<N;fila++){
            k=0;
            for(int col=0; col<N; col++)
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
        }
    }while(k == 1);
    a[f][c] = 'X';
}
void cpu(char a[N][N]){
    int f,c,k;
    srand(time(NULL));
        do{
            f = rand() % N;
            c = rand() % N;
            k = 0;
            if(a[f][c] == 'X' || a[f][c] == 'O')
                k=1;
        }while(k == 1);
    a[f][c] = 'O';
}
int main(){
    char a[N][N];
    int fila,columna;
    inicio();
    introducir(a);
    pintar_matriz(a);
    return EXIT_SUCCESS;
}
