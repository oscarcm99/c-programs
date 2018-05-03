
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>
#define N 3
#define VMAX 9
#define DELTA_T 0.001
typedef struct {
    double x;
    double y;
}Coord2;
typedef struct {
    Coord2 pos;
    Coord2 vel;
    Coord2 acc;
} Sprite;
void init(Sprite object[N]){
    for(int i=0; i<N; i++){
        object[i].pos.x = 0;
        object[i].pos.y = 0;
        object[i].vel.x = rand() % VMAX + 1.;
        object[i].vel.y = rand() % VMAX + 1.;
        object[i].acc.x = 0.;
        object[i].acc.y = -9.8;
    }
}
void update(Sprite object[N]){
    static int rep = 0;
    mvprintw(0,0,"Iteracion %i", ++rep);
    for(int i=0; i<N; i++){
        object[i].vel.x += object[i].acc.x * DELTA_T;
        object[i].vel.y += object[i].acc.y * DELTA_T;
        object[i].pos.x += object[i].vel.x * DELTA_T;
        object[i].pos.y += object[i].vel.y * DELTA_T;
        attron(COLOR_PAIR(2));
        mvprintw(1+i,0,"Objeto %i: %.2lf, %.2lf",i,object[i].pos.x,object[i].pos.y);
        attron(COLOR_PAIR(1));
    }
}
void draw(Sprite object[N]){
    for(int i=0; i<N; i++){
        mvprintw(LINES/2 - object[i].pos.y, COLS/2 - object[i].pos.x,"-");
    }
    attron(COLOR_PAIR(3));
    mvprintw( LINES/2 -(object[0].pos.y + object[1].pos.y + object[2].pos.y) / 3.,  COLS / 2 +(object[0].pos.x + object[1].pos.x + object[2].pos.x) / 3., "SERGIO");
    attron(COLOR_PAIR(1));
    refresh();
}
int main(){
    Sprite object[N];
    initscr();
    curs_set(0);
    srand(time(NULL));
    init(object);
    if(!has_colors())
        return EXIT_FAILURE;
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLACK);
    init_pair(2,COLOR_GREEN,COLOR_BLACK);
    init_pair(3,COLOR_RED,COLOR_BLACK);

    while(1){
        update(object);
        draw(object);
        usleep(DELTA_T * 1000000);
    }
    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
