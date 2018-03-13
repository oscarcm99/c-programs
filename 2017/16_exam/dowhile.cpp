
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
    int opcion;
    do{
        __fpurge(stdin);
        printf("Dime un numero del 1 al 5: ");
        scanf(" %i", &opcion);
    }while(opcion<1 || opcion>5);

    return EXIT_SUCCESS;
}
