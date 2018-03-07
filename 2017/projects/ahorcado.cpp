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
#include <string.h>
#define N 20

void palabra_a_adivinar(char palabra[N]){
	printf("Introduce la palabra a adivinar: ");
	fgets(palabra,N,stdin);
	system("clear");
}
void pedir_letras(char caracter){
	printf("Introduce letras: ");
	scanf(" %c", &caracter);
}
int main(){
	int fallos;
	char letra;
	char buffer[N];
	char *pal = NULL;
	int len;
	//funcion que lee la palabra que hay que adivinar
	palabra_a_adivinar(buffer);
	//calculamos y reservamos espacio en la memoria para calcular posiciones
	len = strlen(buffer);
	pal = (char *) malloc(len * sizeof(char));
	strncpy(pal,buffer,len-1);
	*(pal + len -1)='\0';

	do{
		fallos = 6;
		//pedimos letras al usuario
		pedir_letras(letra);
		for (int i=0; i<len; i++)
			printf("%c",*(pal+i));
	}while(fallos!=0);

	free(pal);
	return EXIT_SUCCESS;
}
