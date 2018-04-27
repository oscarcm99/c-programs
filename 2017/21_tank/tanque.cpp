
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>
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
Coord ask_shot(){
    Coord result;
    double vel,alpha;
    mvprintw(1,2,"Jugador %i ", turno % 2 +1);
    mvprintw(2,2,"========== ");
    mvprintw(3,2,"                                   ");
    mvprintw(4,2,"                                     ");
    mvprintw(3,2,"Velocidad: ");
    scanw(" %lf", &vel);
    mvprintw(4,2,"Angulo: ");
    scanw(" %lf", &alpha);

    res.y = vel * cos(alpha / 360. * 2 * M_PI);
}
int main(){
    int turn;
    Player player[] = {
        {{ {5., 1.},{1, 0},{0., 0.},{0., 0.} },100,20},
        {{ {100., 1.},{1, 0},{0., 0.},{0., 0.} },100,20}
    };
    setLocale(LC_ALL, "");
    initscr();
    curs_set(0);
    while(1){

    }
    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
