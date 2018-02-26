
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	printf("Cargando...\n");
	for(int i=0; i<=100; i++){
		sleep(1);
		printf("\r");
		for(int p=0; p<=i; p++);{
			fflush(stdout);
			printf("=");
		}
			printf("> %i%%", i);
		
	}
	printf("\n\nDone.\n");
	return EXIT_SUCCESS;
}
