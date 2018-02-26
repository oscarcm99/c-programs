#include <stdio.h>
#include <stdlib.h>
#include "comun.h"
#include "interfaz.h"
void principio(){
	system("clear");
	system("toilet -fpagga MATRIZ");
}
void ver(int a[M][N]){
	printf("\n");
	printf(RED);
	for(int f=0; f<M; f++){
		for(int c=0; c<N; c++)
			printf("%4i", a[f][c]);
		printf("\n");
	}
	printf(RESET);
	printf("\n\n");
}
void numero(int *lugar){
	printf("Dime el numero: ");
	scanf(" %i", lugar);
}
