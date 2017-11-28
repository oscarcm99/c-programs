
#include <stdio.h>
#include <stdlib.h>

int main(){
        double vertice[3] = { 8., -6., 4. };
        printf("(%.0lf., %.0lf, %.0lf)=>\t", vertice[0], vertice[1], vertice[2]);
        printf("(%.2lf, %.2lf)\n", vertice[0] / vertice[2], -vertice[1] / vertice[2]);
	return EXIT_SUCCESS;
}
