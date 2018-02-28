
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100
int main(){
    int recorrido = 0;
    int lenght;
    char buffer[N];
    char **l = NULL;
    int o=1;
    while(recorrido<5){
       printf("Dime tu nombre: ");
       scanf(" %[^\n]", buffer);
       lenght = strlen(buffer);

       l = (char **) malloc( o * sizeof(char *));
       *l = (char *) malloc((lenght + 1) * sizeof(char));
       strncpy(*l,buffer,lenght+1);
       l++;
       *l++;
       o++;
       recorrido++;
    }

    for(int i=0; i<5; i++)
        printf("Tu nombre: %s",*(l+i));
    free(l);
    free(*l);
    return EXIT_SUCCESS;
}
