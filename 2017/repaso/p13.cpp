
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
void suma(int *x){(*x)++;}
void resta(int *x){(*x)--;}
int main(){
        void (*p)(int *p);
	int nv = 0;
	char s;
	p = &suma;

	do{
		printf("Introduce: ");
		__fpurge(stdin);
		scanf(" %c",&s);
		
		switch(s){
			case '+':
				p = &suma;
				break;
			case '-':
				p = &resta;
				break;
			case '=':
				(*p)(&nv);
				printf("Nivel: %i\n",nv);
				break;

		};
		if(s == 'x')
			break;
	}while(1);
	return EXIT_SUCCESS;
}
