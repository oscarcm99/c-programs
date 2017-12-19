
#include <stdio.h>
#include <stdlib.h>

int main(){
        int azul,
            amarillo,
            rojo;
        printf("¿Quieres añadir azul? Pulse 1 si lo añades o pulse 0 si no lo añades: ");
        scanf(" %i", &azul);
        printf("¿Quieres añadir amarillo? Pulse 1 si lo añades o pulse 0 si no lo añades: ");
        scanf(" %i", &amarillo);
        printf("¿Quieres añadir rojo? Pulse 1 si lo añades o pulse 0 si no lo añades: ");
        scanf(" %i", &rojo);
        /*Azul con amarillo*/
               /*Blanco y negro*/
        if ( azul == 0 & amarillo == 0 & rojo == 0 ){
            printf("Negro\n");
        }
        else if ( azul == 1 & amarillo == 1 & rojo == 1 ){
            printf("Blanco\n");
        }
        else if ( azul == 1 & amarillo == 0 & rojo == 0 ){
            printf("Azul\n");
        }
	else if ( azul == 0 & amarillo == 1 & rojo == 0 ){
            printf("Amarillo\n");
        }
        else if ( azul == 0 & amarillo == 0 & rojo == 1 ){
            printf("Rojo\n");
        }
        else if ( azul == 1 & amarillo == 1 & rojo == 0 ){
            printf("Verde\n");
        }
        else if ( azul == 1 & amarillo == 0 & rojo == 1 ){
            printf("Púrpura\n");
        }
        else if ( azul == 0 & amarillo == 1 & rojo == 1 ){
            printf("Naranja\n");
        }
 return EXIT_SUCCESS;
}
