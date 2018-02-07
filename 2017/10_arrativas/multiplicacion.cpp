#include <stdio.h>
#include <stdlib.h>
#define N 2
void matrizA(int a[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", a[f][c]);
        printf("\n");
    }
    printf("\n");
}
void matrizB(int b[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("%4i", b[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){
	int a[N][N]={
		{2,5},
		{4,2}
	};
	int b[N][N]={
		{1,6},
		{5,8}
	};
	int f;
	int r[N][N];
        matrizA(a);
        matrizB(b);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			f=0;
			for(int k=0; k<N; k++)
				f+=a[i][k]*b[k][j];
			r[i][j]= f;
			printf("%4i",r[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
