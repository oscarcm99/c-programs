
#include <stdio.h>
#include <stdlib.h>

int main(){
	int filas = 0, columnas = 0;
	int columna = 0;
	int intro;
	bool fin = false;
	double numero;
	double *matriz = NULL;
	printf("La matriz que has introducido es = \n\n");
	do{
		scanf(" %lf", &numero);
		if(filas == 0)
			columnas++;
		columna++;
		if(columna<=columnas){
			matriz = (double *) realloc(matriz, (filas * columnas + columna) * sizeof(double));
			*(matriz + filas * columnas + columna -1) = numero;
		}
		intro = getc(stdin);
		if(intro == '\n'){
			intro = getc(stdin);
			filas++;
			if(intro == '\n')
				fin = true;
			else{
				columna=0;
				for(int c=columna+1; c<columnas; c++){
					matriz = (double *) realloc(matriz, (filas*columnas + c)* sizeof(double));
					*(matriz + filas * columnas + c - 1) = 0.;
				}
			}
		}
		ungetc(intro,stdin);
	}while(!fin);
	for(int f=0; f<filas; f++){
	for(int c=0; c<columnas; c++)
		printf("%7.2lf", *(matriz +c+f*columnas));
	printf("\n");
}
	return EXIT_SUCCESS;
}
