
#include <stdio.h>
#include <stdlib.h>

int main(){
        int lado,
            area,
            perimetro;

        system("toilet --gay -fpagga CUADRADO");

        /* ENTRADA DE DATOS */
        printf("Lado: ");
        scanf(" %i", &lado);

        /* CALCULOS */
        area = lado * lado;
        perimetro = 4 * lado;

        /* SALIDA DE DATOS */
        printf( "Area: %i\n" 
                "Perimtero: %i\n",
                 area,perimetro );

        return EXIT_SUCCESS;
}
