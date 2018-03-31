#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
#define L 3
#define M 4
#define J1 'X'
#define J2 'O'
#define W 30
int ganador(char a[N][N]){

	int lon1=0;
	int lon2=0;

	for(int f=0; f<N; f++){
		for(int c=0; c<N; c++)
			if(a[f][c] == 'X')
				lon1++;
	}
	for(int f=0; f<N; f++){
		for(int c=0; c<N; c++)
			if(a[f][c] == 'O')
				lon2++;
	}
	if(lon1 > lon2)
		return 0;
	else 
		if(lon2>lon1)
			return 1;
		else
			return 2;

}
void inicio(){
	system("clear");
	system("\ttoilet -fpagga REVERSI");
}
void coordinic(char a[N][N]){
	a[L][L] = 'X';
	a[L][M] = 'O';
	a[M][L] = 'O';
	a[M][M] = 'X';

}
bool es_valida_usuario1(char a[N][N], int f, int c){
	if( a[f-1][c] == 'O' || a[f][c-1] == 'O' || a[f][c+1] == 'O'|| a[f+1][c] == 'O')
		return true;
	else{
		printf("La casilla no es adyacente.\n");
		return false;
	}
}
bool es_valida_usuario2(char a[N][N], int f, int c){
	if( a[f-1][c] == 'X' ||  a[f][c-1] == 'X' || a[f][c+1] == 'X' || a[f+1][c] == 'X')
		return true;
	else{
		printf("La casilla no es adyacente.\n");
		return false;
	}
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
		/*	a[L][L] = 'X';
			a[L][M] = 'O';
			a[M][L] = 'O';
			a[M][M] = 'X';*/
	}
}
//mete los datos el usuario
void usuario1(char a[N][N]){
	int f,c,k;

	do{
		do{printf("Mete las coordenadas adyancentes a los puntos ya puestos(usuario 1): ");
			fflush(stdin);
			scanf(" %i, %i", &f,&c);
		}while(!es_valida_usuario1(a,f,c));
		for(int fil=0; fil<N;fil++){
			k=0;
			for(int col=0; col<N; col++)
				if(a[f][c] == 'X' || a[f][c] == 'O'){
					k=1;
				}
		}
		if(a[f][c] == 'X' || a[f][c] == 'O'){
			k = 1;
			printf("La casilla está ocupada.\n");
		}
		if(a[f-1][c-1] == 'O')
			a[f-1][c-1] = 'X';
		if(a[f-1][c] == 'O')
			a[f-1][c] = 'X';
		if(a[f-1][c+1] == 'O')
			a[f-1][c+1] = 'X';
		if(a[f][c-1] == 'O')
			a[f][c-1] = 'X';
		if(a[f][c+1] == 'O')
			a[f][c+1] = 'X';
		if(a[f+1][c-1] == 'O')
			a[f+1][c-1] = 'X';
		if(a[f+1][c] == 'O')
			a[f+1][c] = 'X';
		if(a[f+1][c+1] == 'O')
			a[f+1][c+1] = 'X';

	}while(k == 1 || f<0 || f>7 || c<0 || c>7);
	a[f][c] = 'X';
}
//mete la computadora los datos
void usuario2(char a[N][N]){
	int f,c,k;
do{	
	do{printf("Mete las coordenadas adyancentes a los puntos ya puestos(usuario 2): ");
		fflush(stdin);
		scanf(" %i, %i", &f,&c);
	}while(!es_valida_usuario2(a,f,c));
	for(int fil=0; fil<N;fil++){
		k=0;
		for(int col=0; col<N; col++)
			if(a[f][c] == 'X' || a[f][c] == 'O'){
				k=1;
			}
	}
	if(a[f][c] == 'X' || a[f][c] == 'O'){
		k = 1;
		printf("La casilla está ocupada.\n");
	}

	if(a[f-1][c-1] == 'X')
		a[f-1][c-1] = 'O';
	if(a[f-1][c] == 'X')
		a[f-1][c] = 'O';
	if(a[f-1][c+1] == 'X')
		a[f-1][c+1] = 'O';
	if(a[f][c-1] == 'X')
		a[f][c-1] = 'O';
	if(a[f][c+1] == 'X')
		a[f][c+1] = 'O';
	if(a[f+1][c-1] == 'X')
		a[f+1][c-1] = 'O';
	if(a[f+1][c] == 'X')
		a[f+1][c] = 'O';
	if(a[f+1][c+1] == 'X')
		a[f+1][c+1] = 'O';


}while(k == 1 || f<0 || f>7 || c<0 || c>7);
a[f][c] = 'O';
}
int main(){
	char a[N][N];
	int fila,columna;
	int intentos;
	int enteros;
	intentos = 0;
	introducir(a);
	coordinic(a);
	do{
		inicio();
		pintar_matriz(a);
		usuario1(a);
		pintar_matriz(a);
		usuario2(a);
		intentos++;
	}while(intentos<W);
	pintar_matriz(a);
	enteros = ganador(a);
	if(enteros == 0)
		printf("Ha ganado el jugador 1.\n");
	else
		if(enteros == 1)
			printf("Ha ganado el jugador 2.\n");
		else
			printf("Habeis empatado.\n");

	return EXIT_SUCCESS;
}
