
#include <stdio.h>
#include <stdlib.h>
void inc(int *var){
++var;
}
int main(){
    int a;
    inc(&a);
    printf("%i\n", a);
    return EXIT_SUCCESS;
}
