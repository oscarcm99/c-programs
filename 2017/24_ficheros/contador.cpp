
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *libro;
    int rep;
    char letra,caracter;

    rep = 0;
    printf("Dime un caracter: ");
    scanf(" %c", &caracter);
    libro = fopen("macbeth.txt", "r");
    do{
        if(fgetc(libro) == caracter)
            ++rep;
    }while((letra = fgetc(libro)) != EOF);
    /*while((letra = fgetc(libro)) != EOF){
        if(fgetc(libro) == caracter)
            ++rep;
    }*/
    printf("Hay %i %c´s\n", rep,caracter);
    fclose(libro);
    return EXIT_SUCCESS;
}
