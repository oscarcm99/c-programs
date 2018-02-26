
#include <stdio.h>
#include <stdlib.h>
#define N 11
bool borde(int f, int c){
	return c == 0 || c == N-1 || f == 0 || f == N -1;
}
bool diagprin(int f, int c){
	return f == c;
}
bool diaginv(int f, int c){
	return f + c == N - 1;
}
int main(){
	for(int f=0; f<N; f++){
		for(int c=0; c<N; c++)
			if (borde(f,c) || 
			    diagprin(f,c) || 
			     diaginv(f,c))
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	printf("\n");
	return EXIT_SUCCESS;
}
