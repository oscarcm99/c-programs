
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
typedef struct{
    double mat;
    double leng;
    double historia;
}Nota;

typedef struct{
    char nombre[N];
    char apellidos[N];
    Nota asignaturas;
    void(*test)();
}Alumno;
typedef struct{
    double nota_min;
    int indice;
}Par;
Alumno rellenar(){
    Alumno alumno;
    printf("Nombre: ");
    scanf(" %s", alumno.nombre);
    printf("Apellidos: ");
    scanf(" %s", alumno.apellidos);
    printf("Nota matematicas: ");
    scanf(" %lf", &alumno.asignaturas.mat);
    printf("Nota historia: ");
    scanf(" %lf", &alumno.asignaturas.leng);
    printf("Nota lengua: ");
    scanf(" %lf", &alumno.asignaturas.historia);
    return alumno;
}
void modificar(Alumno *alumno){
    printf("Nombre: ");
    scanf(" %s", alumno->nombre);
    printf("Apellidos: ");
    scanf(" %s", alumno->apellidos);
    printf("Nota matematicas: ");
    scanf(" %lf", &alumno->asignaturas.mat);
    printf("Nota historia: ");
    scanf(" %lf", &alumno->asignaturas.leng);
    printf("Nota lengua: ");
    scanf(" %lf", &alumno->asignaturas.historia);
}
void dump(Alumno lista[N]){
    FILE *fic;
    if(!(fic = fopen("volcado.bck","wb"))){
        fprintf(stderr,"No hay fichero");
    }
    fwrite(lista,sizeof(Alumno),N,fic);
    fclose(fic);
}
Par minimo_mates(Alumno lista[N]){
    Par par{1000,-1};
    for(int i=0; i<N; i++)
        if(par.nota_min>lista[i].asignaturas.mat){
            par.nota_min = lista[i].asignaturas.mat;
            par.indice = i;
        }
    return par;
}
int fibonacci(int n){
    if(n == 0 || n == 1)
        return 1;
return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    Alumno alumno[N];
    alumno[0] = rellenar();
    modificar(alumno);
    return EXIT_SUCCESS;
}
