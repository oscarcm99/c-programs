
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DELTA_T 0.001
typedef struct{
	double x;
	double y;
}Coord;
typedef struct{
	Coord vel;
	Coord pos;
	Coord acc;
}Cosa;
void iniciar(Cosa *cosa){
	cosa->vel.x = 4.;
	cosa->vel.y = 50.;
	cosa->pos.x = 0.;
	cosa->pos.y = 0.;
	cosa->acc.x = 0.;
	cosa->acc.y = -9.0865;
}
void actualizar(Cosa *cosa){
	cosa->vel.x += cosa->pos.x * DELTA_T;
	cosa->vel.y += cosa->pos.y * DELTA_T;
	cosa->pos.x += cosa->acc.x * DELTA_T;
	cosa->pos.y += cosa->acc.y * DELTA_T;
}
void pintar(Cosa cosa){
	printf("Velocidad: x=%lf y=%lf , Posicion: x=%lf y=%lf\n", cosa.vel.x,cosa.vel.y,cosa.pos.x,cosa.pos.y);
}
int main(){
	Cosa cosa;
	iniciar(&cosa);

	while(1){
		actualizar(&cosa);
		pintar(cosa);
		sleep(2);
	}
	return EXIT_SUCCESS;
}
