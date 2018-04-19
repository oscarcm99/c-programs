
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct estudiante{
    int id;
    char nombre[20];
    double porcentaje;
};
int main(){
        struct estudiante record = {0};
        record.id = 1;
        strcpy(record.nombre, "Sergio");
        record.porcentaje = 67.9;
        printf(" ID es : %i\n", record.id);
        printf(" Nombre es : %s\n", record.nombre);
        printf(" Porcentaje es : %lf\n", record.porcentaje);

	return EXIT_SUCCESS;
}
