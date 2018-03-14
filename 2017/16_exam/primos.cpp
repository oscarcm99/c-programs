
#include <stdio.h>
#include <stdlib.h>
#define N 100


bool es_primo(int n){
    for(int d=2; d<N; d++)
        if(n % d == 0)
            return false;
    return true;
}

int main(){

    int primo[N];

for(int np = 0, pp=2; np<N; pp++)
    if(es_primo(pp))
        es_primo[np++] = pp;
    return EXIT_SUCCESS;
}
