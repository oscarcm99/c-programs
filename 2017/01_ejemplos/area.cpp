
#include <stdio.h>
#include <stdlib.h>

int main(){
        double lado,
               area,
               perimetro;

        system("toilet --gay -fpagga CUADRADO");

        /* ENTRADA DE DATOS */
        printf("Lado: ");
        scanf(" %lf", &lado);

        /* CALCULOS */
        area = lado * lado;
        perimetro = 4 * lado;

        /* SALIDA DE DATOS */
        printf( "Area: %.2lf\n" 
                "Perimtero: %.2lf\n",
                 area,perimetro );

        return EXIT_SUCCESS;
}
