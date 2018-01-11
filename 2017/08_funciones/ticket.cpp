
#include <stdio.h>
#include <stdlib.h>
int tic(){
    static int num = 0;
    return ++num;
}
int main(){
        printf(" %i\n", tic());
        printf(" %i\n", tic());
        printf(" %i\n", tic());
        printf(" %i\n", tic());
        printf(" %i\n", tic());
        printf(" %i\n", tic());
        printf(" %i\n", tic());
	return EXIT_SUCCESS;
}
