
#include <stdio.h>
#include <stdlib.h>

int main(){
    double buffer;
    double *vec = NULL;
    int dim =0;
    char end;
    printf("Vector: ");
    scanf(" %*1[(]");
    do{
        vec = (double *) realloc (vec, (dim+1) * sizeof(double));
        scanf(" %lf", &buffer);
        vec[dim++] = buffer;
    }while(!scanf(" %1[)]", &end));
    printf("\n(");
    for(int com=0; com<dim; com++)
        printf("%6.2lf", vec[com]);
    printf(")\n");
    return EXIT_SUCCESS;
}
