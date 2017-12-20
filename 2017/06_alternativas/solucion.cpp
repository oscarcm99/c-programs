
#include <stdio.h>
#include <stdlib.h>

int main(){
    int r = 1,
        y = 0,
        b = 1;
    if (r)
        if (y)
            if (b)
                printf("Blanco");
            else 
                printf("Naranja");
        else
            printf("Rojo");
    else
        if (y)
            if (b)
                printf("Morado");
            else 
                printf("Azul");
        else
            printf("Verde");
    printf("\n");

    return EXIT_SUCCESS;
}
