
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, ext;
    printf("Dime lo que mide el lado del cuadrado: ");
    scanf(" %i", &num);
    printf("Dime cuantos cuadrados quieres: ");
    scanf(" %i", &ext);
    printf("\n");
    for (int c=0;c<num;c++){
        for(int f=0; f<ext; f++)
            if(f<3 || f>=6)
            printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    for (int c=0; c<num; c++){
        for(int g=0; g<ext; g++)
            if(g<3 || g>=6)
            printf("  ");
        else
            printf("* ");
        printf("\n");
    }
    for(int c=0; c<num; c++){
        for(int l=0; l<ext; l++)
            if(l<3 || l>=6)
            printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return EXIT_SUCCESS;
}
