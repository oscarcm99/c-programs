
#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

const char *cargar = "a.bmp";
const char *destino = "b.bmp";

int main(){
        FILE *dir = NULL;
	Header header;
	Color imagen[232 * 217];
	int pixels = 232 * 217;
       	
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
	imagen[i].r = imagen[i].g = imagen[i].b = avg;
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
