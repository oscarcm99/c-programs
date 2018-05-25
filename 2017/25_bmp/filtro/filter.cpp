
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bmp.h"

const char *cargar = "e.bmp";
const char *destino = "b.bmp";

int main(){
    FILE *dir = NULL;
    Header header;
    Color imagen[1280 * 697];
    int pixels = 1280 * 697;


    if(!(dir = fopen(cargar,"r"))){
        fprintf(stderr,"No hay imagen.\n");
        return EXIT_FAILURE;
    }
    fread(&header,sizeof(Header),1,dir);
    fseek(dir,header.bmp.data_offset, SEEK_SET);
    fread(imagen, sizeof(Color),pixels,dir);
    fclose(dir);

    for(int i = 0; i<pixels; i++){
        char avg;
        avg = (imagen[i].r + imagen[i].g + imagen[i].b) / 3;
        srand(time(NULL));
        if(imagen[i].r > avg){
            imagen[i].r = 255;
            imagen[i].g = 255;
            imagen[i].b = 255;
        }
        else{
            imagen[i].r = 0;
            imagen[i].g = 0;
            imagen[i].b = 0;
        }
        if(imagen[i].g > avg){
            imagen[i].r = 255;
            imagen[i].g = 255;
            imagen[i].b = 255;
        }
        else{
            imagen[i].r = 0;
            imagen[i].g = 0;
            imagen[i].b = 0;
        }
        if(imagen[i].b > avg){
            imagen[i].r = 255;
            imagen[i].g = 255;
            imagen[i].b = 255;
        }
        else{
            imagen[i].r = 0;
            imagen[i].g = 0;
            imagen[i].b = 0;
        }
    }

    if(!(dir = fopen(destino,"r+"))){
        fprintf(stderr,"No hay imagen.\n");
        return EXIT_FAILURE;
    }
    fseek(dir,header.bmp.data_offset, SEEK_SET);
    fwrite(imagen, sizeof(Color), pixels, dir);
    fclose(dir);
    return EXIT_SUCCESS;
}
