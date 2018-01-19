
#include <stdio.h>
#include <stdlib.h>
#define N 7
int main(){
        int lado;
        printf("Dime lado: ");
        scanf("%i", &lado);
        for(int f=0; f<lado; f++){
            for(int c=0; c<lado-f; c++)
            printf("*");
            printf("\n");
        }
	return EXIT_SUCCESS;
}
