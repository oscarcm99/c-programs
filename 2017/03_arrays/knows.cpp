
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define   N 0xFF

int main(){
        char nombre[N];
        int lista[N];
        char no[N] = {'p','e','p','e', '\0'};
        char nom[N] = "pepe";

        nom[3] = 'a'; /*Despues de inicializar hay que ir celda a celda*/

        printf("Nombre ocupa: %lu bytes.\n", sizeof(nombre));
        printf("Nombre ocupa: %Xh bytes.\n", (int)sizeof(nombre));
        printf("Nombre ocupa: %lu bytes.\n", sizeof(lista));
        printf("Lista ocupa: %lu celdas.\n", sizeof(lista) / sizeof(int));
        printf("%c", nombre[0]);
        printf("%c", nombre[1]);
        printf("%c", nombre[2]);
        printf("%c", nombre[3]);
        printf("%c", nombre[4]);
        printf("%c", nombre[5]);
        printf("\n");
        printf("%s\n", nombre);
        bzero(lista, sizeof(lista));
        memset(lista + 1, 3, 3);

	    printf("%X.", lista[0]);
        printf("%X.", lista[1]);
        printf("%X.", lista[2]);
        printf("%X.", lista[3]);
        printf("%X.", lista[4]);
        printf("%X.", lista[5]);
        printf("\n");
       
        printf("Dime tu nombre: ");
        fgets(nombre, N, stdin);
        sprintf(nom, "Tu nombre es: %s", nombre);
        printf("%s\n", nom);
        return EXIT_SUCCESS;
}
