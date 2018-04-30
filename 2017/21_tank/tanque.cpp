
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#define DELTA_T 0.01
typedef struct{
	double x;
	double y;
} Coord;

typedef struct{
	Coord pos;
	Coord dir;
	Coord vel;
	Coord acc;
} Movil;

typedef struct{
	Movil cuerpo;
	int vida;
	int ammo;
} Player;
void draw(Player jugador[2]){
	mvprintw(LINES - jugador[0].cuerpo.pos.y, jugador[0].cuerpo.pos.x,"▞█████▚");
	mvprintw(LINES - jugador[1].cuerpo.pos.y, jugador[1].cuerpo.pos.x,"▞█████▚");
}
Coord ask_shot(int turn){
	Coord result;
	double vel,alpha;
	mvprintw(1,2,"Jugador %i ", turn % 2 +1);
	mvprintw(2,2,"========== ");
	mvprintw(3,2,"                                   ");
	mvprintw(4,2,"                                     ");
	mvprintw(3,2,"Velocidad: ");
	scanw(" %lf", &vel);
	mvprintw(4,2,"Angulo: ");
	scanw(" %lf", &alpha);

	result.y = vel * cos(alpha / 360. * 2 * M_PI);
	result.x = vel * sin(alpha / 360. * 2 * M_PI);
	return result;
}
void shoot(Movil bullet){
	Coord ini;
	do{
		ini = bullet.pos;
		bullet.vel.x += bullet.acc.x * DELTA_T;
		bullet.vel.y += bullet.acc.y * DELTA_T;
		bullet.pos.x += bullet.vel.x * DELTA_T;
		bullet.pos.y += bullet.vel.y * DELTA_T;

		mvprintw(LINES -ini.y, ini.x," ");
		mvprintw(LINES -bullet.pos.y,bullet.pos.x,"O");
		refresh();
		usleep(1000000 * DELTA_T);
	}while(bullet.pos.y > 0);
}
int main(){
	int turn = 0;
	Movil bullet = {{0.,0.},{0.,0.},{0.,0.},{0.,-9.8}};
	Player player[] = {
		{{ {5., 1.},{1, 0},{0., 0.},{0., 0.} },100,20},
		{{ {100., 1.},{1, 0},{0., 0.},{0., 0.} },100,20}
	};
	setlocale(LC_ALL, "");
	initscr();
	curs_set(0);
	while(1){
		draw(player);
		refresh();
		bullet.pos = player[turn % 2].cuerpo.pos;
		bullet.vel = ask_shot(turn);
		shoot(bullet);
		if(bullet.pos.y == player[0].cuerpo.pos.y || bullet.pos.y == player[1].cuerpo.pos.y)
			mvprintw(5,2,"Dañado");
		turn++;
	}
	curs_set(1);
	endwin();
	return EXIT_SUCCESS;
}
