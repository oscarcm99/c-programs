
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
int longitud;
char* introducir_palabra(){
    char buffer[N];
    char *palabra;
    //Introduce la palabra a adivinar
    printf("Mete la palabra a adivinar: ");
    fgets(buffer,N,stdin);
    longitud = strlen(buffer);
    palabra = (char *) malloc(longitud * sizeof(char));
    strncpy(palabra,buffer,longitud);
    *(palabra + longitud - 1) = '\0';
    printf("%s\n",palabra);
    return palabra;
}
char* init(){
    char *palabra = introducir_palabra();
    for(int i=0; i<(longitud-1); i++){
        *(palabra + i) = '_';
    }
    for(int i=0; i<longitud; i++)
        printf(" %c ", *(palabra + i));
    printf("\n");
    return palabra;
}
char letras_usuario(){
    char letra;
    printf("Mete una letra: ");
    scanf(" %c", &letra);
    return letra;
}
bool es_valida(){

}
int main(){
    char *palabra = init();
    char caracter = letras_usuario();
    return EXIT_SUCCESS;
}
