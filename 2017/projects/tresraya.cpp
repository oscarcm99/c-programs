//Dibujar una matriz de 3 x 3 para jugar al tres en raya
//Pedir a dos usuarios O o X para jugar al juego del que vamos a jugar con coordenadas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
int ganador(char c[N][N]){
    if(c[0][0] == 'X' || c[0][0] == '0'){
        if(c[0][0]== c[0][1] && c[0][0] == c[0][2])
            if(c[0][0] == 'X')
                return 0;//hemos ganado
            else
                return 1;//hemos perdido
        if(c[0][0] == c[1][0] && c[0][0]== c[2][0])
            if(c[0][0] == 'X')
                return 0;
            else
                return 1;
    }
    if(c[1][1] == 'X' || c[1][1] == '0'){
        if(c[1][1] == c[0][0] && c[1][1] == c[2][2])
            if(c[1][1] == 'X')
                return 0;
            else
                return 1;
        if(c[1][1] == c[1][0] && c[1][1] == c[1][2])
            if(c[1][1] == 'X')
                return 0;
            else
                return 1;
        if(c[1][1] == c[2][0] && c[1][1] == c[0][2])
            if(c[1][1]=='X')
                return 0;
            else
                return 1;
        if(c[1][1] == c[0][1] && c[1][1] == c[2][1])
            if(c[1][1]=='X')
                return 0;
            else
                return 1;

    }
    if(c[2][2] == 'X' || c[2][2] == '0'){
        if(c[2][2] == c[2][0] && c[2][2] == c[2][1])
            if(c[2][2] == 'X')
                return 0;
            else
                return 1;
        if(c[2][2] == c[0][2] && c[2][2] == c[1][2])
            if(c[2][2] == 'X')
                return 0;
            else
                return 1;
    }
    return 2;
}
void introducir(char c[N][N]){
    char aux = '1';
    for(int i=0; i<N; i++){
        for(int j = 0; j<N; j++)
            c[i][j] = aux++; 

    }
}
void tablero(char c[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            if(j<2)
                printf(" %c |", c[i][j]);
            else
                printf(" %c ", c[i][j]);
        if(i<2)
            printf("\n-----------\n");
        printf("\n");
    }
}
void usuario(char c[N][N]){
    int i,j,k;
    char aux;
    do{

        do{
            printf("Coloca una ficha: ");
            fflush(stdin);
            scanf(" %c",&aux);

        }while(aux < '1' || aux > '9');
        k = 0;
        switch(aux){
            case '1':
                i = 0;
                j = 0;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '2':
                i=0;
                j=1;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '3':
                i=0;
                j=2;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '4':
                i=1;
                j=0;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '5':
                i=1;
                j=1;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '6':
                i=1;
                j=2;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '7':
                i=2;
                j=0;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '8':
                i=2;
                j=1;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            case '9':
                i=2;
                j=2;
                if(c[i][j] == 'X' || c[i][j] == '0'){
                    k=1;
                    printf("La casilla está ocupada.\n");
                }
                break;
            default:
                printf("No hay numero.\n");
                break;
        }
    }while(k == 1);
    c[i][j] = 'X';
}
void cpu(char c[N][N]){
    char aux;
    int i,j,k;
    srand(time(NULL));
    do{
        i = rand()%3;
        j = rand()%3;
        k = 0;
        if(c[i][j] == 'X' || c[i][j] == '0' )
            k=1;
    }while(k == 1);
    c[i][j] = '0';
}
void loop(char c[N][N]){
    int i,j;
    i=0;

    introducir(c);

    do{
        system("clear");
        tablero(c);
        if(i%2==0)
            usuario(c);
        else
            cpu(c);
        j = ganador(c);
        i++;
    }while(i<=9 && j == 2);
    system("clear");
    tablero(c);
    if (j == 0)
        printf("Has ganado\n");
    else 
        if(j == 1)
            printf("has perdido. \n");
        else
            printf("Has empatado.\n");
    /*introducir(c);
      tablero(c);
      usuario(c);
      tablero(c);
      cpu(c);
      tablero(c);*/
}
int main(){
    char c[N][N];
    loop(c);//llama a todas las funciones y hace refresco de la pantalla
    return EXIT_SUCCESS;
}
