
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
void increment(int *x){(*x)++;}
void decrement(int *x){(*x)--;}
int main(){
        void(*f)(int *p);
	int nv = 100;
        char c;
	do{
		printf("Introduce: ");
		__fpurge(stdin);
		scanf(" %c",&c);
		switch(c){
			case '+':
				f = &increment;
				break;
			case '-':
				f = &decrement;
				break;
			case '=':
				(*f)(&nv);
				printf("Nivel: %i.\n",nv);
				break;
		}
		if(c == 'x')
			break;
	}while(1);
	return EXIT_SUCCESS;
}
