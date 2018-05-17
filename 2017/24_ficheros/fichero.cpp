
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *tubo;
    tubo = fopen("a.txt", "w");
    fprintf(tubo,"Quillooo.\n");
    fclose(tubo);

	return EXIT_SUCCESS;
}
