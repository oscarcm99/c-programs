
#include <stdio.h>
#include <stdlib.h>
#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4
#define PORCENTAJE 5
int main(){
    unsigned o;
    double p,
           n, 
           m;
    system("toilet --gay  Calculadora");
    printf( "\t¿Que opción quieres realizar?\n"
            "\t 1 Suma.\n"
            "\t 2 Resta.\n"
            "\t 3 Multiplicación.\n"
            "\t 4 División.\n"
            "\t 5 Porcentajes.\n"
            "\n"
            "\t Pulse la tecla que desee: ");
    scanf(" %u", &o);
    switch(o){
        case SUMA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n + m );
            break;
        case RESTA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n - m );
            break; 
        case MULTIPLICACION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("El resultado es =  %.3lf\n",n * m );
            break;
        case DIVISION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            printf("\tEl resultado es =  %.3lf\n",n / m );
            break;
        case PORCENTAJE:
            printf("\tDime un numero: ");
            scanf(" %lf", &n);
            printf("\tQue porcentaje deseas aplicar: ");
            scanf(" %lf", &p);
            printf("\tEl %.2lf por ciento de %.2lf es = %.3lf\n", p, n, n * p / 100 );
            break;
        default:
            printf("\tERROR\n");
            break;
    }
    return EXIT_SUCCESS;
}
