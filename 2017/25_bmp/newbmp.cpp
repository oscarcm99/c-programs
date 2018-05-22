
#include <stdio.h>
#include <stdlib.h>


typedef struct{
    u_int16_t type;
    u_int32_t size;
    u_int16_t reserved1;
    u_int16_t reserved2;
    u_int16_t offBits;
}BMPFileheader;

typedef struct{
    u_int32_t size;
    int32_t width;
    int32_t height;
    u_int32_t planes;
    u_int16_t bitCount;
    u_int32_t sizeImage;
    int32_t xPelsPerMeter;
    int32_t yPelsPerMeter;
    u_int32_t clrUsed;
    u_int32_t clrImportant;
}BMPInfoheader;

typedef struct{
    u_int8_t rgbtBlue;
    u_int8_t rgbtGreen;
    u_int8_t rgbtRed;
}RGBTriple;
void show_head(BMPFileheader fh){
    printf("Tipo: %u\n",fh.type);
    printf("Tamaño: %u\n",fh.size);
    printf("R1: %u\n",fh.reserved1);
    printf("R2: %u\n",fh.reserved2);
    printf("Fuera Bits: %u\n",fh.offBits);
}
void show_info(BMPInfoheader ih){
    printf("Tamaño: %u\n", ih.size);
    printf("Anchura: %i\n", ih.width);
    printf("Altura: %i\n",ih.height);
    printf("Planos: %u\n",ih.planes);
    printf("Bits: %u\n",ih.bitCount);
    printf("Tamaño de la imagen: %u\n",ih.sizeImage);
    printf("X: %i\n",ih.xPelsPerMeter);
    printf("Y: %i\n",ih.yPelsPerMeter);
    printf("Uso del color: %u\n",ih.clrUsed);
    printf("Importancia del color: %u\n",ih.clrImportant);
}
void show_color(RGBTriple rgb){
    printf("Azul: %u\n", rgb.rgbtBlue);
    printf("Verde: %u\n",rgb.rgbtGreen);
    printf("Rojo: %u\n", rgb.rgbtRed);
}
int main(){
    FILE *tubo = NULL;
    BMPFileheader fh;
    BMPInfoheader ih;
    RGBTriple rgb;

    if(!(tubo = fopen("a.bmp","r"))){
        fprintf(stderr,"No hay fichero\n");
        return EXIT_FAILURE;
    }
    fread(&fh, sizeof(BMPFileheader), 1, tubo);
    fread(&ih, sizeof(BMPInfoheader), 1, tubo);
    fread(&rgb, sizeof(RGBTriple), 1, tubo);
    fclose(tubo);
    show_head(fh);
    show_info(ih);
    show_color(rgb);
    return EXIT_SUCCESS;
}
