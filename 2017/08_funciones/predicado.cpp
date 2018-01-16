
#include <stdio.h>
#include <stdlib.h>
int es_par(int op1){   
    printf("Dime un número: ");
    scanf(" %i", &op1);    
    return op1;
}
int main(){
    if(es_par(2) % 2 == 0)
        printf("Es par.\n");
    else
        printf("Es impar.\n");
    return EXIT_SUCCESS;
}
