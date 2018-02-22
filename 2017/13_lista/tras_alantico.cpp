
#include <stdio.h>
#include <stdlib.h>

int main(){
    char hola[]="paco sanz preso politico";
    char *letra = hola;
    //letra = hola;
    while(*letra != '\0'){
        printf("%c", *letra);
        letra++;
    }
    printf("\n");
    while(letra > hola){
        printf("%c", *--letra);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
