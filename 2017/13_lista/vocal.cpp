
#include <stdio.h>
#include <stdlib.h>
//pedir una vocal al usuario
//que en la frase esa vocal introducida cambie a todas las vocales de la frase
int main(){
	char frase[] = "Mi moto alpina derrapante";
	char *letra = frase;
	char guardado;
	char gu;
	printf("Dame una vocal: ");
	scanf(" %c", &guardado);
	while(*letra != '\0'){
		if(*letra=='a' || *letra == 'e' || *letra == 'i' || *letra == 'o' || *letra == 'u')
			*letra = guardado;
		printf("%c\n", *letra);
		letra++;
	}	
	printf("\n");
	return EXIT_SUCCESS;
}
