
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4
#define PORCENTAJE 5
#define RAIZ 6
#define RESTO 7
#define LOGARITMO 8
const char *choose[] = {
    "Suma",
    "Resta",
    "Multiplicación",
    "División",
    "Porcentaje",
    "Raíz",
    "Resto",
    "Logaritmo",
    NULL
};
int main(){
    unsigned o;
    int a, 
        b, 
        c;
    double p,
           n, 
           m;
    system("toilet --gay  Calculadora");
    printf("\t☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭\n");
    printf( "\t¿Que opción quieres realizar?\n");
    for (int i = 0; i<=7; i++)
    printf("\t %i %s.\n", i+1, choose[i]);
    printf("\n");
    printf("\tElija la opción que desee escoger: ");
    scanf(" %u", &o);
    switch(o){
        case SUMA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n + m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
        case RESTA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n - m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break; 
        case MULTIPLICACION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n * m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
        case DIVISION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n / m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
        case PORCENTAJE:
            printf("\tDime un numero: ");
            scanf(" %lf", &n);
            printf("\tQue porcentaje deseas aplicar: ");
            scanf(" %lf", &m);
            p = n * m / 100;
            printf("\tEl %.2lf por ciento de %.2lf es = %.3lf\n", m, n, p);
            break;
        case RAIZ:
            printf("\tDime el número para calcular la raíz cuadrada: ");
            scanf(" %lf", &n);
            if (n >= 0){
            p = sqrt (n);
            printf("\tLa raíz cuadrada de %.2lf es = %.2lf\n", n, p);
            }else
                printf("\tERROR\n");
            break;
        case RESTO:
            printf("\tDime el dividendo: ");
            scanf(" %i", &a);
            printf("\tDime el divisor: ");
            scanf(" %i", &b);
            c = a % b;
            printf("\tEl resto es = %i\n", c);
            break;
        case LOGARITMO:
            printf("\tIntroduce el número para calcular el logaritmo: ");
            scanf(" %lf", &n);
            p = log10(n);
            printf("\tEl resultado es = %.2lf\n", p);
            break;
        default:
            printf("\tERROR\n");
            break;
    }
    return EXIT_SUCCESS;
}
