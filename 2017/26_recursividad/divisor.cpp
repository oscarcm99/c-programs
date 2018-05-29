
#include <stdio.h>
#include <stdlib.h>

bool tiene_divisor(int dividendo, int divisor){
        if(divisor == 1 || dividendo < divisor)
            return false;
        if(dividendo %  divisor == 0)
            return true;
        return tiene_divisor(dividendo,divisor-1);

}
int main(){
    int dividendo, divisor;
    printf("Introduce dividendo y divisor: ");
    scanf(" %i %i", &dividendo,&divisor);
    if(tiene_divisor(dividendo,divisor))
        printf("Tiene divisor.\n");
    else
        printf("No tiene divisor\n");
    return EXIT_SUCCESS;
}
