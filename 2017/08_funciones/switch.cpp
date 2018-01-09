
#include <stdio.h>
#include <stdlib.h>
const char *e[]{
    "Tribuna",
    "Fondo",
    "Lateral",
    "Muro",
    NULL
};
void cpp(unsigned *opcion){
     *opcion;
}
int main(){
    unsigned opcion;
    cpp(&opcion);
    system("toilet --gay ENTRADAS");
    printf("\tPrecios partido Granada vs Rayo.\n");
    for (int i = 0; i<=3; i++)
        printf("\t%i. %s.\n", i+1, e[i]);
    printf("\n");
    printf("\tElija la zona del campo: ");
    scanf(" %u", &opcion);
    switch(opcion){
        case 1:
            printf("\tPrecio:30€\n");
            break;
        case 2:
            printf("\tPrecio:15€");
            break;
        case 3:
            printf("\tPrecio:20€\n");
            break;
        case 4:
            printf("\tPrecio:10€\n");
            break;
        default:
            printf("\tERROR☭\n");
            break;
    }
    return EXIT_SUCCESS;
}
