
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
#define AREA 9
#define PERIMETRO 10
#define CUADRADO 1
#define CIRCULO 2
#define RECTANGULO 3
#define TRIANGULO 4
#define ROMBO 5
/*Constante que incluye el nombre de las opciones*/
const char *choose[] = {
    "Suma",
    "Resta",
    "Multiplicación",
    "División",
    "Porcentaje",
    "Raíz",
    "Resto",
    "Logaritmo",
    "Áreas de polígonos",
    "Perímetros de polígonos",
    NULL
};
/*Constante que incluye las opciones de las áreas de los polígonos*/
const char *wide[] = {
    "Cuadrado",
    "Círculo",
    "Rectángulo",
    "Triángulo",
    "Rombo",
    NULL
};
int main(){
    /*Variables*/
    unsigned o, e, k;
    int a, 
        b, 
        c;
    double p,
           n, 
           m,
           v;
    system("toilet --gay  Calculator");
    printf("\t☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭☭\n");
    printf( "\t¿Que opción quieres realizar?\n");
    for (int i = 0; i<=9; i++)/*Incluye la dirección de memoria de la constante choose*/
        printf("\t %i %s.\n", i+1, choose[i]);
    printf("\n");
    printf("\tElija la opción que desee escoger: ");
    scanf(" %u", &o);
    switch(o){
        /*SUMA*/
        case SUMA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n + m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
            /*RESTA*/
        case RESTA:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n - m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
            /*MULTIPLICACIÓN*/
        case MULTIPLICACION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n * m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
            /*DIVISIÓN*/
        case DIVISION:
            printf("\tDime el primer número: ");
            scanf(" %lf", &n);
            printf("\tDime el segundo número: ");
            scanf(" %lf", &m);
            p = n / m;
            printf("\tEl resultado es =  %.3lf\n",p);
            break;
            /*PORCENTAJE*/
        case PORCENTAJE:
            printf("\tDime un numero: ");
            scanf(" %lf", &n);
            printf("\tQue porcentaje deseas aplicar: ");
            scanf(" %lf", &m);
            p = n * m / 100;
            printf("\tEl %.2lf por ciento de %.2lf es = %.3lf\n", m, n, p);
            break;
            /*RAÍCES CUADRADAS*/
        case RAIZ:
            printf("\tDime el número para calcular la raíz cuadrada: ");
            scanf(" %lf", &n);
            if (n >= 0){
                p = sqrt (n);
                printf("\tLa raíz cuadrada de %.2lf es = %.2lf\n", n, p);
            }else
                printf("\tERROR\n");
            break;
            /*RESTO DE DIVISIONES ENTRE NÚMEROS ENTEROS*/
        case RESTO:
            printf("\tDime el dividendo: ");
            scanf(" %i", &a);
            printf("\tDime el divisor: ");
            scanf(" %i", &b);
            c = a % b;
            printf("\tEl resto es = %i\n", c);
            break;
            /*LOGARITMO EN BASE 10*/        
        case LOGARITMO:
            printf("\tIntroduce el número para calcular el logaritmo: ");
            scanf(" %lf", &n);
            p = log10(n);
            printf("\tEl resultado es = %.2lf\n", p);
            break;
            /*ÁREAS DE POLÍGONOS*/
        case AREA:
            system("toilet --gay Áreas");
            printf("\t¿Qué área quieres calcular?\n");
            for(int l = 0; l<=4; l++ )
                printf("\t %i. %s.\n", l+1, wide[l]);
            printf("\n");
            printf("\tElija la opción que desee escoger: ");
            scanf(" %u", &e);
            switch(e){
                /*ÁREA CUADRADO*/
                case CUADRADO:
                    printf("\t¿Cuánto mide el lado?: ");
                    scanf(" %lf", &n);
                    p = n * n;
                    printf("\tEl área del cuadrado es igual a %.2lf cm cuadrados\n", p);
                    break;
                    /*ÁREA CÍRCULO*/
                case CIRCULO:
                    printf("\t¿Cuánto mide el radio?: ");
                    scanf(" %lf", &n);
                    p = n * n * 3.1416;
                    printf("\tEl área del círculo es igual a %.3lf cm cuadrados.\n", p);
                    break;
                    /*ÁREA RECTÁNGULO*/
                case RECTANGULO:
                    printf("\t¿Cuánto mide la base?: ");
                    scanf(" %lf", &n);
                    printf("\t¿Cuánto mide la altura?: ");
                    scanf(" %lf", &m);
                    p = n * m;
                    printf("\tEl área del rectángulo es igual a %.2lf cm cuadrados.\n", p);
                    break;
                    /*ÁREA TRIÁNGULO*/
                case TRIANGULO:
                    printf("\t¿Cuánto mide la base?: ");
                    scanf(" %lf", &n);                                        
                    printf("\t¿Cuánto mide la altura?: ");
                    scanf(" %lf", &m);
                    p = n * m / 2;
                    printf("\tEl área del triángulo es igual a %.2lf cm cuadrados.\n", p);
                    break;
                case ROMBO:
                    printf("Dime la diagonal mayor: ");
                    scanf(" %lf", &n);
                    printf("Dime la diagonal menor: ");
                    scanf(" %lf", &m);
                    p = n * m / 2;
                    printf("El área del rombo es igual a %.2lf cm cuadrados", p);
                    break;
                default:
                    printf("\tERROR\n");
                    break;
            }
            break;
        case PERIMETRO:
            system("toilet --gay Perímetro");
            printf("\t¿Que perímetro deseas saber?:\n");
            for (int l = 0; l<=4; l++)
                printf("\t %i. %s.\n",l+1, wide[l]);
            printf("\n");
            printf("\tElija la opción que desee escoger: ");
            scanf(" %u", &e);
            switch(e){
                case CUADRADO:
                    printf("\t¿Cuanto mide el lado?: ");
                    scanf(" %lf", &n);
                    p = 4 * n;
                    printf("\tEl perímetro del cuadrado es igual a %.2lf cm\n", p);
                    break;
                case CIRCULO:
                    printf("\t¿Cuánto mide el radio?: ");
                    scanf(" %lf", &n);
                    p = 2 * 3.1416 * n;
                    printf("\tEl perímetro del círculo es igual a %.3lf cm\n", p);
                    break;
                case RECTANGULO:
                    printf("\t¿Cuánto mide la base?: ");
                    scanf(" %lf", &n);
                    printf("\t¿Cuánto mide la altura?: ");
                    scanf(" %lf", &m);
                    p = 2 * n * 2 * m;
                    printf("\tEl perimetro del rectángulo es igual a %.2lf cm\n", p);
                    break;
                case TRIANGULO:
                    printf("\t¿Cuanto mide el primer lado?: ");
                    scanf(" %lf", &n);
                    printf("\t¿Cuánto mide el segundo lado?: ");
                    scanf(" %lf", &m);
                    printf("\t¿Cuánto mide el tercer lado?: ");
                    scanf(" %lf", &v);
                    p = n + m + v;
                    printf("\tEl perimetro del triangulo es igual a %.2lf cm\n", p);
                    break;
                case ROMBO:
                    printf("\t¿Cuanto mide el lado?: ");
                    scanf(" %lf", &n);
                    p = 4 * n;
                    printf("\tEl perímetro del rombo es igual a %.2lf\n", p);
                    break;
                default:
                    printf("\tERROR\n");
                    break;
            }
            break;

        default:
            printf("\tERROR\n");/*IMPRIME ESTO SI EL NÚMERO INTRODUCIDO NO ESTÁ EN EL RANGO DE NÚMEROS A INTRODUCIR*/
            break;
    }
    return EXIT_SUCCESS;
}
