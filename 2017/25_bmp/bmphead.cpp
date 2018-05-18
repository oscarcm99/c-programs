
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char signature[2];
    int size;
    char reserv1[2];
    char reserv2[2];
    int offset;
}BMPHeader;

typedef struct{
    int bitmapcoreheader[3];
    int os22xbitmapheader[16];
    int bitmapinfoheader[10];
    int bitmapv2infoheader[13];
    int bitmapv3infoheader[14];
    int bitmapv4header[27];
    int bitmapv5header[31];
}DIBHeader;

void show_header(BMPHeader cab){
    printf("Signature:  %c%c\n", cab.signature[0], cab.signature[1]);
    printf("Tamaño:  %i\n", cab.size);
    printf("Datos de imagen: %i (%Xh)\n", cab.offset, cab.offset);
}
void show_dib(DIBHeader dib){
    printf("Nucleo del mapa de bits: ");
    for(int i=0; i<3; i++)
        printf(" %i ", dib.bitmapcoreheader[i]);
    printf("\n");
    printf("Cabeza del mapa: ");
    for(int i=0; i<16;i++)
        printf(" %i ", dib.os22xbitmapheader[i]);
    printf("\n");
    printf("Informacion cabeza bitmap: ");
    for(int i=0; i<10; i++)
        printf(" %i ", dib.bitmapinfoheader[i]);
    printf("\n");
    printf("Informacion V2 cabeza bitmap: ");
    for(int i=0; i<13;i++)
        printf(" %i ", dib.bitmapv2infoheader[i]);
    printf("\n");
    printf("Informacion V3 cabeza bit map: ");
    for(int i=0; i<14; i++)
        printf(" %i ", dib.bitmapv3infoheader[i]);
    printf("\n");
    printf("Cabeza V4: ");
    for(int i=0; i<27; i++)
        printf(" %i ", dib.bitmapv4header[i]);
    printf("\n");
    printf("Cabeza V5: ");
    for(int i=0; i<31; i++)
        printf(" %i ", dib.bitmapv5header[i]);
    printf("\n");

}
int main(){
    BMPHeader header;
    DIBHeader dib;
    FILE *pbmp = NULL;
    if(!(pbmp = fopen("a.bmp","r"))){
    fprintf(stderr,"No se encontro el fichero.\n");
    return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader),1,pbmp);
    fread(&dib,sizeof(DIBHeader),1,pbmp);
    fclose(pbmp);
    show_header(header);
    show_dib(dib);
    return EXIT_SUCCESS;
}
