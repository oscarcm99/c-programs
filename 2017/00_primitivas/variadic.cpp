
#include <stdio.h>
#include <stdlib.h>

int main(){
        int op1;
        int op2;

<<<<<<< HEAD

        printf("Operando 1: ");
        scanf(" %i", &op1);

	printf("Operando 2: ");
	scanf(" %i", &op2);
=======
        printf("Operando 1: ");
        scanf(" %i", &op1);
	    printf("Operando 2: ");
	    scanf(" %i", &op2);
>>>>>>> e8f0304470a0e441d9220867e39cc74bdcf1d84a

        printf("%i * %i = %i\n", op1, op2, op1 * op2);
	return EXIT_SUCCESS;
}
