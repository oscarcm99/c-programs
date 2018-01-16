
#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i=0; i<7; i++)
        printf("* ");
    printf("\n");
    for (int i=0;i<1;i++)
        for(int d=0; d<1;d++)
            printf("* *         *\n");
        for (int w=0; w<1;w++)
            printf("*   *       *\n");
        for (int s=0; s<1;s++)
            printf("*     *     *\n");
        for (int q=0; q<1;q++)
            printf("*       *   *\n");
        for (int l=0; l<1;l++)
            printf("*         * *\n");
    for (int u=0; u<7; u++)
        printf("* ");
    printf("\n");

    return EXIT_SUCCESS;
}
