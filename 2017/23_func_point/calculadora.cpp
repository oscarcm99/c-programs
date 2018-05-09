
#include <stdio.h>
#include <stdlib.h>
#define N 16
#define MAX 0x100
#define DEBUG(...) printf(__VA_ARGS__);
int error = 0;
const char *mes[]{
	"Todo OK",
		"Pila vacia.",
		"Pila llena"
};

typedef struct{
	char nombre[N];
	double (*op)(double, double);
} Operacion;

typedef struct{
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

bool push(double dato, Pila *pila){
	if(pila->cima >= MAX){
		error = 2;
		return false;
	}
	error = 0;
	pila->data[pila->cima++] = dato;
	DEBUG("%lf\n", dato);
	return true;
}
int pop(Pila *pila){
	if(pila->cima ==0){
		error = 1;
		return 0;
	}
	error = 0;
	pila->cima--;
	DEBUG("%i\n", pila->data[pila->cima]);
	return pila->data[pila->cima];
}
double sum(double op1, double op2){return op1 + op2;};
double res(double op1, double op2){return op1 - op2;};
double mul(double op1, double op2){return op1 * op2;};
double div(double op1, double op2){return op1 / op2;};
int main(){
	Pila op, datos;
	double op1, op2;
	bool func = false;
	char operador;
	int operaciones;
	Operacion catalogo[]{
		{"suma", &sum},
			{"resta", &res},
			{"multiplicacion", &mul},
			{"division", &div}
	};
	printf("Cuantas operaciones quieres hacer: ");
	scanf(" %i", &operaciones);
	while(operaciones == 0){
		printf("Operacion: ");
		scanf(" %lf %c %lf", &op1,&operador,&op2);
		func = push(op2, &datos);
		func = push(op1, &datos);
		if(func == true){
		switch(operador){
			case '+':
				push(sum, &op);
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
				printf("Introduce otro operador.\n");
				break;

		}
		operaciones--;
	}
	}
	return EXIT_SUCCESS;
}
