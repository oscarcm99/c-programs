
#include <stdio.h>
#include <stdlib.h>
#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5
const char *opcion[] = {
    "Triangulo",
    "Cuadrado",
    "Paralelogramo",
    "Pentágono",
    "Círculo",
    NULL
};
int main(){
    unsigned eleccion;
    system("toilet --gay -fpagga AREAS");
    printf("Elige la figura.\n");
    for(int i=0; i<5; i++)
    printf("\t%i. %s.\n", i+1, opcion[i]);
    printf("\n" "\tOpcion: ");
    scanf(" %u", &eleccion);
    switch(eleccion){
        case TRI:
            printf("\t △\n"); 
            break;
        case CUA:
            printf("\t □ \n"); 
            break;
        case PAR:
            printf("\t ▱ \n"); 
            break;
        case PEN:
            printf("\t ⬠ \n"); 
            break;
        case CIR:
            printf("\t ○ \n"); 
            break;
        default:
            printf("No hay numero\n");
            break;
    }
    return EXIT_SUCCESS;
}
