#include <stdio.h>
#include <stdlib.h>
#define N 0x10
int main(){
    char hxdc[N];
    printf("Mete un numero en hexadecimal: ");
    scanf(" %[0123456789abcdefABCDEF]", hxdc);
    printf("El numero en hexadecimal es => 0x%s\n", hxdc);

}
