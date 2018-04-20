
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DELTA_T 0.01
struct TCoord{
    double x;
    double y;
};
typedef struct TCoord Coord;

void actualizar(Coord *posicion, Coord *velocidad, Coord aceleracion){
    velocidad->x += aceleracion.x * DELTA_T;
    velocidad->y += aceleracion.y * DELTA_T;
    posicion->x += velocidad->x * DELTA_T;
    posicion->y += velocidad->y * DELTA_T;
}
void pintar(Coord posicion, Coord velocidad){
    printf("%.2lfm(%.2lf m/s)\t%.2lfm(%.2lf m/s)\n", posicion.x,velocidad.x,posicion.y,velocidad.y);
}
int main(){
    struct TCoord posicion = {0., 0. },
                  velocidad = {4., 50. },
                  aceleracion = { 0., -9.80665 };

    while(1){
        actualizar(&posicion, &velocidad, aceleracion);
        pintar(posicion,velocidad);
        usleep(100000);
    }
    return EXIT_SUCCESS;
}
