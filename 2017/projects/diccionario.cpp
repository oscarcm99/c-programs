
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#define NUMLET ('z'-'a'+1);
int main(int argc, const char **argv){
    FILE *dirfich = NULL;
    double element[NUMLET];
    int letra;
    int total = 0;

    bzero(element, NUMLET * sizeof(double));

    if(argc < 2){
        fprintf(stderr,"Uso: %s <fichero>\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    if(!(dirfich = fopen(argv[1],"r+"))){
        fprintf(stderr,"Fichero no encontrado: %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }

    while((letra = fgetc(dirfich)) !=EOF)
        if(isaplha(letra)){
            letra = tolower(letra);
            firma[ letra -'a']++;
        }
    fclose(dirfich);

    for(int i=0; i<NUMLET; i++)
        total += element[i];

    for(int i=0; i<NUMLET; i++)
        element[i] = element[i] / total;
    for(int i=0; i<NUMLET; i++)
        printf("%c: %.2lf \% \n",'a'+i, element[i] * 100 );

    pf = fopen("salida.dat","wb+")
        fwrite(firma,sizeof(double), NUMLET, dirfich);
    fclose(dirfich);
    return EXIT_SUCCESS;
}
