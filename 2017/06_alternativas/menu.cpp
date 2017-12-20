
#include <stdio.h>
#include <stdlib.h>
#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5
int main(){
        unsigned opcion;
        system("toilet --gay -fpagga AREAS");
        printf(
                "Elige la figura:\n"
                "\n"
                "\t1. Triangulo\n"
                "\t2. Cuadrado\n"
                "\t3. Paralelogramo\n"
                "\t4. Pentágono\n"
                "\t5. Círculo\n"
                "\n"
                "\tOpcion: "
                );
        scanf(" %u", &opcion);
        switch(opcion){
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
