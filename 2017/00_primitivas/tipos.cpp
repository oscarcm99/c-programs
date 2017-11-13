
#include <stdio.h>
#include <stdlib.h>

int main(){
        int entero = 34;
        float realillo = 35.7;
        double real = 35.7;
        long int entero_largo = 93;
        unsigned positivo = 5;
        unsigned char byte = 97;

        printf("%i   \t(%lu bytes)\n", entero, sizeof(int));
        printf("%f   \t(%lu bytes)\n", realillo, sizeof(float));
        printf("%u   \t(%lu bytes)\n", positivo, sizeof(int));
        printf("%8.2lf  \t(%lu bytes)\n", real, sizeof(double));
        printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
        printf("%i   \t(%lu bytes)\n", byte, sizeof(char));

	return EXIT_SUCCESS;
}
