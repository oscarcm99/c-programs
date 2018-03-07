/*Primero damos una palabra
 * calculamos la longitud
 *la guardamos la palabra que tiene que adivinar
 * pedimos al usuario que introduzca letras
 * el usuario tiene 6 fallos
 * si acierta la letra la mostramos
 * si falla la letra le restamos un fallo
 * */
#include <stdio.h>
#include <stdlib.h>
const char *p = "palindromo";
int main(){
        int fallos = 6;
        char letra;
        do{
            pedir();
        }while(fallos == 0);
	return EXIT_SUCCESS;
}
