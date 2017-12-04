#include <stdio.h>
#include <stdlib.h>
#define D 3
#define X 0
#define Y 1
#define Z 2
int main(){
    double ver[D] = { X, Y, Z};
    printf("Introduce el vertice X: ");
    scanf(" %lf", &ver[X]);
    printf("Introduce el vertice Y: ");
    scanf(" %lf", &ver[Y]);
    printf("Introduce el vertice Z: ");
    scanf(" %lf", &ver[Z]);

    printf("El vertice X = %.2lf , el vertice Y = %.2lf y el vertice Z = %.2lf\n", ver[X], ver[Y], ver[Z]);
    printf("Las coordenadas de los vertices anteriores son: (%.2lf,%.2lf)\n", ver[X] / ver[Z], ver[Y] / ver[Z]);



}
