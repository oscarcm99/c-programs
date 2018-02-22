
#include <stdio.h>
#include <stdlib.h>
//pedir una vocal al usuario
//que en la frase esa vocal introducida cambie a todas las vocales de la frase
int main(){
    char frase[] = "Mi moto alpina derrapante";
    char *letra = frase;
    char guardado;
    printf("Dame una vocal: ");
    scanf(" %[aeiou]", &guardado);
    while(*letra != '\0'){
        if(*letra=='a' || *letra=='e' || *letra=='i' || *letra=='o' || *letra=='u'){
            *letra = guardado;
            letra++;
        }

        printf("%c\n", *++letra);
    }
    return EXIT_SUCCESS;
}
