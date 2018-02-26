
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	printf("Cargando...\n");
	for(int i=0; i<=100; i++){
		sleep(1);
		fprintf(stderr, "\r");
		for(int p=0; p<=i; p++)
			fprintf(stderr,"\r");
		fprintf(stderr, "> %i%%", i);
	}
	fprintf(stderr, "\n\nDone.");
	return EXIT_SUCCESS;
}
