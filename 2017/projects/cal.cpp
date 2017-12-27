
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned o;
    double n, 
           m;
    system("toilet --gay  Calculadora");
    printf( "\t¿Que opción quieres realizar?\n"
            "\t 1 Suma.\n"
            "\t 2 Resta.\n"
            "\t 3 Multiplicación.\n"
            "\t 4 División.\n"
            "\n"
            "\t Pulse la tecla que desee: ");
            scanf(" %u", &o);
    switch(o){
        case 1:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n + m );
            break;
         case 2:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n - m );
            break; 
         case 3:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("El resultado es =  %.3lf\n",n * m );
            break;
         case 4:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n / m );
            break;
    }
	return EXIT_SUCCESS;
}
