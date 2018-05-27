
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bmp.h"

#define R3 1.7321
const char *carga = "w.bmp";
const char *destino = "v.bmp";

Color *leer(Header *header, const char *file ){
	Color *imagen;
	FILE *pbmp = NULL;

	if(!(pbmp = fopen(file,"r"))){
		fprintf(stderr,"No hay fichero.\n");
		exit(EXIT_FAILURE);
	}
	fread(header,sizeof(Header),1,pbmp);

	if(header->dib.bpp != 24){
		fprintf(stderr,"No hay 24 bpp.\n");
		exit(EXIT_FAILURE);
	}
	fseek(pbmp,header->bmp.data_offset,SEEK_SET);
	imagen = (Color *) malloc(header->dib.image_size);
	fread(imagen,sizeof(Color),8 * header->dib.image_size / header->dib.bpp,pbmp);
	fclose(pbmp);

	return imagen;
}
unsigned char *leerarchivo(const char *file, Header header){
	FILE *pbmp = NULL;
	unsigned char *filename = NULL;
	if(!(pbmp = fopen(file,"r"))){
		fprintf(stderr,"No hay imagen de partida.\n");
		exit(EXIT_FAILURE);
	}
	filename = (unsigned char *) malloc(header.bmp.size);
	fread(filename, 1, header.bmp.size,pbmp);
	fclose(pbmp);
	return filename;
}
int main(){
	unsigned char *bmp = NULL;
	unsigned char *luminosidad = NULL;
	Color *imagen;
	Header header;
	int pixels = 0;

	imagen = leer(&header,carga);
	bmp = leerarchivo(carga,header);

	pixels = 8 * header.dib.image_size / header.dib.bpp;
	fprintf(stderr,"Pixels: %i", pixels);
	luminosidad = (unsigned char *) malloc(pixels);
	for(int i = 0; i<pixels; i++)
		*(luminosidad + i) = (unsigned char)(sqrt(imagen[i].r * imagen[i].r + imagen[i].g * imagen[i].g + imagen[i].b * imagen[i].b)/R3);
	for(unsigned i=0; i<header.dib.image_size; i++)
		*(bmp + header.bmp.data_offset + i) = *(luminosidad + i/3);
	fwrite(bmp,1,header.bmp.size, stdout);
	free(luminosidad);
	free(bmp);
	free(imagen);

	return EXIT_SUCCESS;
}
