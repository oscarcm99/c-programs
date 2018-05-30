
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
void incrementa(int *n){(*n)++;}
void decrementa(int *n){(*n)--;}
int main(){
	char c;
	void(*p)(int *n) = &incrementa;
	int nivel = 100;

	do{
		printf("Introduce: ");
		__fpurge(stdin);
		scanf(" %c", &c);

		switch(c){
			case '+':
				p = &incrementa;
				break;
			case '-':
				p = &decrementa;
				break;
			case '=':
				(*p)(&nivel);
				printf("Nivel: %i.\n",nivel);
				break;
		}
		if(c == 'x')
			break;
	}while(1);
	return EXIT_SUCCESS;
}
