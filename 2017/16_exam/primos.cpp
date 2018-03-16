
#include <stdio.h>
#include <stdlib.h>
#define N 100


bool es_primo(int numero){
    for(int divisor=2; divisor<numero; divisor++)
        if(numero % divisor == 0)
            return false;
    return true;
}

int main(){

    int primo[N];

    for(int np = 0, pp=2; np<N; pp++)
        if(es_primo(pp))
            primo[np++] = pp;

    for(int f=0; f<N; f++)
        printf(" %i ", primo[f]);

    printf("\n");
    return EXIT_SUCCESS;
}
