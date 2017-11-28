
#include <stdio.h>
#include <stdlib.h>
#define D 3
#define X 0
#define Y 1
#define Z 2
int main(){
        double vertice[D] = { X, Y, Z };
        printf("Introduce X: ");
        scanf(" %lf", &vertice[0]);
        printf("Introduce Y: ");
        scanf(" %lf", &vertice[1]);
        printf("Introduce Z: ");
        scanf(" %lf", &vertice[Z]);
        printf("(%lf, %lf, %lf) => (%.2lf, %.2lf)\n", vertice[X], vertice[Y], vertice[Z], vertice[X] / vertice[Z], vertice[Y] / vertice[Z]);
	return EXIT_SUCCESS;
}
