#include <stdio.h>
#include <stdlib.h>
enum Opcion{cuadrado=1, triangulo, circulo};
void menu(enum Opcion *opcion){
	int eleccion;
	system("clear");
	system("toilet --gay -fpagga MENU");
	printf("\n\n"	
		"Escoge: \n\n"
		"\t1.-Cuadrado.\n"
		"\t2.-Triangulo.\n"
		"\t3.-Circulo.\n"
		"\n"
		"Opcion: "
		);
	scanf(" %i",&eleccion);
	*opcion = (enum Opcion) eleccion;
}
int main(){
	enum Opcion eleccion;
	menu(&eleccion);
	printf("Has escogido: ");
	switch(eleccion){
		case cuadrado:
			printf("cuadrado.\n");
			break;
		case triangulo:
			printf("triangulo.\n");
			break;
		case circulo:
			printf("circulo.\n");
			break;
	}
    return EXIT_SUCCESS;
}
