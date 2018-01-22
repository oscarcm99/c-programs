
#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    for(int f=0; f<N; f++){
        for(int t=0; t<10; t++)
            for(int c = 0; c<N; c++)
                if(f==c && t%2==0)
                    printf("· ");
                else
                    if(f+c==2 && t%2!=0)
                        printf("· ");
                    else
                        printf(" ");
        printf("\n");
    }
    return EXIT_SUCCESS;
}
