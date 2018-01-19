
#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int f=0; f<3; f++){
        for(int t=0; t<3; t++)
            for(int c=t?1:0; c<3; c++)
                if(f==c)
                    printf("* ");
                else
                    printf("  ");
        printf("\n");
    } 


    return EXIT_SUCCESS;
}
