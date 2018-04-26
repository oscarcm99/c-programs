
#include <stdio.h>
#include <stdlib.h>
#define N 0x10

typedef struct TEmpleado{
    char nombre[N];
    char puesto[N];
    double salario;
    struct TEmpleado *nuevo;
} Empleado;


void rellena(Empleado *apuntar){
    printf("Nombre: ");
    scanf(" %s", apuntar->nombre);
    printf("Puesto: ");
    scanf(" %s", apuntar->puesto);
    printf("Salario: ");
    scanf(" %lf", &apuntar->salario);

    apuntar->nuevo = NULL;
}
void imprimir(Empleado rellenado){
    printf("%s | %s (%.2lf)\n", rellenado.nombre, rellenado.puesto, rellenado.salario);
}
int main(){
    Empleado *empleado = NULL;

    empleado = (Empleado *) malloc(sizeof(Empleado));
    rellena(empleado);
    empleado->nuevo = (Empleado *) malloc(sizeof(Empleado));
    rellena(empleado->nuevo);
    empleado->nuevo->nuevo = (Empleado *) malloc(sizeof(Empleado));
    rellena(empleado->nuevo->nuevo);

    imprimir(*empleado);
    imprimir(*empleado->nuevo);
    imprimir(*empleado->nuevo->nuevo);

    free(empleado->nuevo->nuevo);
    free(empleado->nuevo);
    free(empleado);
    return EXIT_SUCCESS;
}
