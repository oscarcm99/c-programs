#include <stdio.h>
#include <stdlib.h>
#include "comun.h"
#include "interfaz.h"

void design(){
	system("clear");
	system("toilet -fpagga CONWAY GAME");
}
void matriz(int a[N][N]){
	printf("\n");
	for(int f=0; f<N; f++){
		for(int c=0; c<N; c++)
			printf("%4i", a[f][c]);
		printf("\n");
	}
	printf("\n\n");
}
void cerouno(int *num){
	printf("Ponme 0's y 1's: ");
	scanf(" %i", num);
}
