
#include <stdio.h>
#include <stdlib.h>
//pedir una vocal al usuario
//que en la frase esa vocal introducida cambie a todas las vocales de la frase
int main(){
    char frase[] = "Mi moto alpina derrapante";
    char *letra = frase;
    char guardado;
    while(*letra != '\0'){
        printf("Dame una vocal: ");
        scanf(" %[aeiou]", &guardado);
        if(*letra=='a'){
            *letra = guardado;
        }
        printf("%c", *letra);
        letra++;
    }
    return EXIT_SUCCESS;
}
