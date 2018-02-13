
#include <stdio.h>
#include <stdlib.h>

int main(){
    int filas = 0, columnas = 0;// la dimension de la matriz
    int columna = 0; //cada columna de cada matriz
    int miradita; //mira con adelanto si viene un barra n
    bool fin = false; //indica si el do while se acaba o no 
    double nuevo_num;
    double *matriz = NULL;
    printf("Dime tu matriz:\n\n");
        do{
            //pide un numero y lo aloja en la matriz dinamica
            scanf(" %lf", &nuevo_num);
            if(filas==0)
                columnas++;
            columna++;
            if(columna<=columnas){ //las columnas extras se descartan
                matriz = (double *) realloc (matriz, (filas * columnas + columna) * sizeof(double));
                *(matriz + filas * columnas + columna - 1) = nuevo_num;
            }
            //distingue si estamos cambiando de linea o se ha terminado la matriz(dos saltos de linea)
            miradita = getc(stdin);
            if(miradita == '\n'){
                miradita = getc(stdin);
                filas++;
                if(miradita =='\n')
                    fin = true;
                else{
                    columna = 0;
                    for(int c=columna+1; c<columnas; c++){
                        matriz = (double *) realloc (matriz, (filas * columnas + c) * sizeof(double));
                        *(matriz+ filas * columnas + c-1) = 0.;
                    }
                }
            }
            ungetc(miradita, stdin);
        }while(!fin);
    //ver la matriz
    for(int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            printf("%7.2lf", *(matriz+c+f*columnas));
        printf("\n");
    }
    return EXIT_SUCCESS;
}
