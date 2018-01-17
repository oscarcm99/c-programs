
#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int f=0 ; f<3;f++){
        for(int c=0; c<3 || c>6;  c++)
            printf("* ");
            printf(" ");
            printf("\n");
    }
for(int f=0 ; f<3;f++){
        for(int c=0; c<6 ; c++)
            printf("* ");
            printf("\n");
    }
for(int f=0 ; f<3;f++){
        for(int c=0; c<9; c++)
            printf("* ");
            printf("\n");
    }
	return EXIT_SUCCESS;
}
