
#include <stdio.h>
#include <stdlib.h>

int main(){
        int op1;
        do{
            printf("Dime un numero par: ");
            scanf(" %i", &op1);
        }while (op1 % 2 != 0);

	return EXIT_SUCCESS;
}
