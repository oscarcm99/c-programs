
#include <stdio.h>
#include <stdlib.h>
#define N 0x10

typedef struct{
	char nombre[N];
	char puesto[N];
	double salario;
} Empleado;

void rellenar(Empleado *nuevo){
	printf("Nombre: ");
	scanf(" %s", nuevo->nombre);
	printf("Puesto: ");
	scanf(" %s", nuevo->puesto);
	printf("Salario: ");
	scanf(" %lf", &nuevo->salario);
}
void imprimir(Empleado empleado){
	printf("%s | %s [%.2lf€]\n", empleado.nombre, empleado.puesto, empleado.salario);
}
int main(){
	Empleado *first = NULL;
	first = (Empleado *) malloc(sizeof(Empleado));
	rellenar(first);
	imprimir(*first);

	free(first);
	return EXIT_SUCCESS;			
}
