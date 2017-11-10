
#include <stdio.h>
#include <stdlib.h>

int main(){
        int op1;
        int op2;

<<<<<<< HEAD
        printf("Operando 1: ");
        scanf(" %i", &op1);
=======
	printf("Operando 1: ");
	scanf(" %i", &op1);

>>>>>>> 66a2808ec1129c061ab07d37d2007a8a8e80a8a2
        printf("Operando 2: ");
        scanf(" %i", &op2);

        printf("%i * %i = %i\n", op1, op2, op1 * op2);
	return EXIT_SUCCESS;
}
