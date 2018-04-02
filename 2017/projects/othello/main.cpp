#include <stdio.h>
#include <stdlib.h>
#include "comun.h"
#include "interfaz.h"
#define W 30

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
