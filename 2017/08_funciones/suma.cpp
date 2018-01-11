
#include <stdio.h>
#include <stdlib.h>
int suma(int op1, int op2){
         return op1 + op2;
}
int main(){
        int res;
        res = suma(4,12);
        printf("La suma es igual a %i\n", res);
	return EXIT_SUCCESS;
}
