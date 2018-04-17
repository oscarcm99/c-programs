
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include <unistd.h>
#define N 200
struct Coordenada{
    int x;
    int y;
};
void pintar(struct Coordenada lista[N]){
    clear();
    for(int i=0; i<N;i++)
        mvprintw(lista[i].y % LINES, lista[i].x,":V");
    refresh();
}
void actualizar(struct Coordenada lista[N]){
    for(int i=0; i<N; i++){
        lista[i].x += rand() % 3 -1;
        lista[i].y += (rand() % 200) / 100 + 1;
    }
}
void inicializar(struct Coordenada lista[N]){
    for(int i=0; i<N; i++){
    lista[i].y = 1;
    lista[i].x = rand() % COLS;
    }
}
int main(){
    struct Coordenada gota[N];
  
    srand(time(NULL));
    initscr();
    inicializar(gota);
    curs_set(0);

    while(1){
        actualizar(gota);
        pintar(gota);
        usleep(200000);
    }
    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
