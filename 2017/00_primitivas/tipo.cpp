#include <stdio.h>
#include <stdlib.h>

#define rojo "\x1B[31m"
#define norm "\x1B[39m"
int main(){
        int entero = 34;
        float realillo = 35.7;
        double real = 35.7;
        long int entero_largo = 93;
        unsigned positivo = 5;
        unsigned char byte = 97;

        system("toilet --gay -fpagga DATOS\n\n"); 
        printf("%i   \t(%lu bytes)\n", entero, sizeof(int));
        printf("%f   \t(%lu bytes)\n", realillo, sizeof(float));
        printf("%u   \t(%lu bytes)\n", positivo, sizeof(int));
        printf("%8.2lf  \t(%lu bytes)\n", real, sizeof(double));
        printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
        printf("%i   \t(%lu bytes)\n", byte, sizeof(char));
        printf("%c%c%c", 0x31,0x32, 0xA);
        printf(rojo "12\n" norm);

	return EXIT_SUCCESS;
}
