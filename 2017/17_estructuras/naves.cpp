
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
typedef struct {
	int x;
	int y;
}Coord;

typedef struct{
	int vida;
	Coord coord;
}Nave;
void crear(Nave *nave){
	nave->vida = 100;
	nave->coord.x = rand()%256;
	nave->coord.y = rand()%256;
}
Nave mover(Nave nave){
	nave.coord.x++;
	nave.coord.y++;
	return nave;
}
void pintar(Nave nave[]){
	for(int i=0; i<MAX; i++)
	printf(" x:%i , y:%i , vida:%i .\n",nave[i].coord.x,nave[i].coord.y,nave[i].vida);
}
int main(){
        Nave nave[MAX];
	srand(time(NULL));

	for(int i=0;i<MAX; i++)
	    crear(&nave[i]);
	do{
		system("clear");
		for(int i=0; i<MAX; i++)
			nave[i] = mover(nave[i]);
		pintar(nave);
		getchar();
	}while(1);
	return EXIT_SUCCESS;
}
