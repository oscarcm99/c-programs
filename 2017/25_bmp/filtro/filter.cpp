
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bmp.h"

const char *cargar = "v.bmp";
const char *destino = "w.bmp";

int main(){
    FILE *dir = NULL;
    Header header;
    Color imagen[1069 * 1336];
    int pixels = 1069 * 1336;


    if(!(dir = fopen(cargar,"r"))){
        fprintf(stderr,"No hay imagen.\n");
        return EXIT_FAILURE;
    }
    fread(&header,sizeof(Header),1,dir);
    fseek(dir,header.bmp.data_offset, SEEK_SET);
    fread(imagen, sizeof(Color),pixels,dir);
    fclose(dir);

    for(int i = 0; i<pixels; i++){
        srand(time(NULL));
        imagen[i].r = 25;
	imagen[i].g = 143;
	imagen[i].b = 79;
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
