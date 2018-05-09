
#include <stdio.h>
#include <stdlib.h>
int suma(int op1, int op2){
    return op1 + op2;
}
int main(){
    int a = 3,
        b = 1;
    int *p = &a;
    char su;
    int (*resta)(int a, int b);

    printf("¿a o b?: ");
    scanf(" %c", &su);

    if(su == 'b')
        p = &b;
    printf("%i\n", *p);
    suma(a,b);
    resta = &suma;
    printf("%i\n",(*resta)(a,b));

	return EXIT_SUCCESS;
}
