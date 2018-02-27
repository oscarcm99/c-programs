
#include <stdio.h>
#include <stdlib.h>

int main(){
    int columnas = 0, filas = 0;
    int columna =0;
    int intro;
    bool fin = false;
    double num;
    double *matriz = NULL;
    printf("Introduce los vectores tal que asi [1 2 3] que asi se hagan las filas de cada columna.\n");
    printf("Introduce tu matriz: \n\n");
    do{
        scanf(" %*1[[]"); //necesita un corchete para que el programa comience a funcionar
        scanf(" %lf", &num);// lee los numeros
        if(filas==0)
            columnas++;
        columna++;
        if(columna<=columnas){
            matriz = (double *) realloc (matriz, (filas*columnas+columna)*sizeof(double));
            *(matriz + filas*columnas + columna -1) = num;
        }
        scanf(" %*1[]]");
        intro = getc(stdin);
        if(intro == '\n'){
            intro = getc(stdin);
            filas++;
            if(intro == '\n')
                fin = true;
            else{
                columna = 0;
                for(int c=columna+1; c<columnas; c++){
                    matriz = (double *) realloc (matriz, (filas * columnas + c) * sizeof(double));
                    *(matriz + filas * columnas + c-1) = 0.;
                }
            }
        }
        ungetc(intro,stdin);
    }while(!fin);

    for(int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            printf("%7.2lf", *(matriz + c +f*columnas));
        printf("\n");
    }
    return EXIT_SUCCESS;
}
