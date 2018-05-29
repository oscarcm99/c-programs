
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void key(char *letra){
    printf(" %c ", *letra);
    if(*letra  != '\0')
        key(letra+1);
}
void reves(char *letra){
    if(*(letra+1) != 0)
        reves(letra+1);
    printf(" %c ", *letra);
}
int main(){
    char frase[] = "dabale el arroz a su puta madre";
    char *letra;
    letra = frase;
    key(letra);
    printf("\n");
    reves(letra);
    printf("\n");
    return EXIT_SUCCESS;
}
