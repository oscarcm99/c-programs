#include <stdio.h>
#include <stdlib.h>

#define N 16
#define MAX 10
#define DEBUG(...) printf(__VA_ARGS__);
int  error = 0;
const char *mssg[] = {
	"Todo OK.",
	"Pila vacía.",
	"Pila llena."
};

typedef struct {
	char nombre[N];
	double (*op)(double, double);
} Operacion;

typedef struct {
	int data[MAX];
	int cima;
} Pila;


enum {
	suma,
	resta,
	multi,
	division,
	OPERA
};

bool push(int dato, Pila *pila){
	if (pila->cima >= MAX){
		error = 2;
		return false;
	}
	error = 0;
	pila->data[pila->cima++] = dato;
	return true;
}

int pop(Pila *pila) {
	if (pila->cima == 0){
		error = 1;
		return 0;
	}
	error = 0;
	pila->cima--;
	DEBUG("T_T %i\n", pila->data[pila->cima]);
	return pila->data[pila->cima];
}

double sum(double op1, double op2) { return op1 + op2; }
double res(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){

	Pila op, datos;
	double op1, op2;
	char opera;
	int veces;
	bool ver = true;
	Operacion catalogo[] = {
		{"suma",  &sum},
		{"resta", &res},
		{"multiplacion", &mul},
		{"division", &div}
	};
	printf("Cuantas operaciones vas a hacer: ");
	scanf(" %i", &veces);
	while(veces>0){
		printf("Operacion: ");
		scanf(" %lf %c %lf", &op1, &opera, &op2);
		ver = push(op2, &datos);
		ver = push(op1, &datos);
		if(ver == true){
			switch(opera) {
				case '+':
					push(suma, &op);
					break;
				case '-':
					push(resta, &op);
					break;
				case '*':
					push(multi, &op);
					break;
				case '/':
					push(division, &op);
					break;
				default:
					printf("aaaaaaaaaaaaaaaaaa\n");
					break;

			}
		}
		veces--;
	}
	for(int i=0; i<veces; i++){
		int num = pop(&op);
		double res = catalogo[num].op((double) pop(&datos), (double) pop(&datos) );
		printf("%s\n", catalogo[num].nombre);
		printf("Resultado: %.2lf\n", res);
	}
	return EXIT_SUCCESS;
}
