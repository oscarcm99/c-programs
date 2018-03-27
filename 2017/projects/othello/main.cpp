
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define L 3
#define M 4
#define J1 'X'
#define J2 'O'
void inicio(){
	system("clear");
	system("\ttoilet -fpagga REVERSI");
}
bool es_valida(char a[N][N], int f, int c){
	if(a[f-1][c-1] == 'X' || a[f-1][c-1] == 'O' || a[f-1][c] == 'X' || a[f-1][c] == 'O' || a[f-1][c+1] == 'X' || a[f-1][c+1] == 'O' || a[f][c-1] == 'X' || a[f][c-1] == 'O' || a[f][c+1] == 'X' || a[f][c+1] == 'O'|| a[f+1][c-1] == 'X' || a[f+1][c-1] == 'O' || a[f+1][c] == 'X' || a[f+1][c] == 'O' || a[f+1][c+1] == 'X' || a[f+1][c+1] == 'O')
		return true;
	else
		return false;
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
	int mun = 0;
	for(int i = 0; i<N; i++)
		printf("\t  %i", num++);
	printf("\n");
	printf("\n\t______________________________________________________________\n");
	printf("\n");
	for(int f=0; f<N; f++){
		printf("%i\n", mun++);
		for(int c=0; c<N; c++)
			if(c<8)
				printf("\t  %c   |",a[f][c]);
		if(f<8)
			printf("\n\t______________________________________________________________\n");
		printf("\n");
		a[L][L] = 'X';
		a[L][M] = 'O';
		a[M][L] = 'O';
		a[M][M] = 'X';
	}
}
//mete los datos el usuario
void usuario(char a[N][N]){
	int f,c,k;

	do{
		do{printf("Mete las coordenadas adyancentes a los puntos ya puestos: ");
			fflush(stdin);
			scanf(" %i, %i", &f,&c);
		}while(!es_valida(a,f,c));
		for(int fil=0; fil<N;fil++){
			k=0;
			for(int col=0; col<N; col++)
				if(a[f][c] == 'X' || a[f][c] == 'O'){
					k=1;
				}
		}
		if(a[f][c] == 'X' || a[f][c] == 'O')
			printf("La casilla está ocupada.\n");
	}while(k == 1 || f<0 || f>7 || c<0 || c>7);
	a[f][c] = 'X';
}
//mete la computadora los datos
void cpu(char a[N][N]){
	int f,c,k;
	int fila = 3;
	int columna = 3;
	srand(time(NULL));
	do{

	do{	f = rand() % N;
		c = rand() % N;
}while(!es_valida(a,f,c));
		k = 0;
		if(a[f][c] == 'X' || a[f][c] == 'O')
			k=1;
	}while(k == 1 || f<0 || f>7 || c<0 || c>7);
	a[f][c] = 'O';
}
int main(){
	char a[N][N];
	int fila,columna;
	int intentos;
	intentos = 0;
	introducir(a);
	do{
		inicio();
		pintar_matriz(a);
		usuario(a);
		cpu(a);
		intentos++;
	}while(intentos<9);
	pintar_matriz(a);
	return EXIT_SUCCESS;
}
