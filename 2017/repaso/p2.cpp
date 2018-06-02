
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
typedef struct TJugador{
	char nombre[N];
	char equipo[N];
	int dorsal;
	struct TJugador *nuevo;
}Jugador;
void rellenar(Jugador *jugador){
printf("Nombre: ");
scanf(" %s", jugador->nombre);
printf("Equipo: ");
scanf(" %s", jugador->equipo);
printf("Dorsal: ");
scanf(" %i", &jugador->dorsal);
}
void imprimir(Jugador jugador){
	printf("Nombre: %s, Equipo: %s, Dorsal: %i\n", jugador.nombre, jugador.equipo, jugador.dorsal);
}
int main(){
        Jugador *nuevo = NULL;
	nuevo = (Jugador *) malloc(sizeof(Jugador));
	rellenar(nuevo);
	nuevo->nuevo = (Jugador *) malloc(sizeof(Jugador));
	rellenar(nuevo->nuevo);
	nuevo->nuevo->nuevo = (Jugador *) malloc(sizeof(Jugador));
	rellenar(nuevo->nuevo->nuevo);

	imprimir(*nuevo);
	imprimir(*nuevo->nuevo);
	imprimir(*nuevo->nuevo->nuevo);

	free(nuevo->nuevo->nuevo);
	free(nuevo->nuevo);
	free(nuevo);

	return EXIT_SUCCESS;
}
