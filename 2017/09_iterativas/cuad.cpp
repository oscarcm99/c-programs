
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
        for(int fc=0; fc<N; fc++)
		for(int f=0; f<N; f++){
		for(int cc=0; cc<N; cc++)
			for (int c=0; c<N; c++)
				printf("* ");
		printf("\n");
		}
	return EXIT_SUCCESS;
}
