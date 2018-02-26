
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
	int a[N][N]{
		{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	int sum = 0;
	for(int f=0; f<N; f++){
		int diag=1;
		for(int c=0; c<N; c++)
			diag*= a[c][(f+c)%N];
		printf("La diagonal = %i\n", diag);
		sum += diag;
	}
	for(int f=0; f<N; f++){
		int diag =1;
		for(int c=0; c<N; c++)
			diag *= a[(f+c)%N][N-1-c];
		printf("La diagonal innversa = %i\n", diag);
		sum-=diag;
	}
	printf("Determinante = %i\n", sum);
	return EXIT_SUCCESS;
}
