#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define N 0xFF
int main (){
    char name[N];
   
    printf("Dime tu nombre y apellidos: ");
    fgets(name, N, stdin);
    printf("Hola muy buenas %s espero que tengas muy buen día\n", name);
}
