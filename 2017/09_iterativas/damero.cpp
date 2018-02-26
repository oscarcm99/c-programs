
#include <stdio.h>
#include <stdlib.h>

void cua(int fila, int columna){
	for(int fc=0; fc<fila; fc++)
		for(int f=0; f<fila; f++){
		for(int cc=0; cc<columna; cc++)
		for(int c=0; c<columna; c++)
			if ((fc+cc)%2)
				printf(" ");
			else
				printf("*");
printf("\n");
		}
}
int main(){
    cua(3,4);
    return 0;
}
