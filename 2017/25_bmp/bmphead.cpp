
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
    char bitmapcoreheader[12];
    char os22xbitmapheader[64];
    char bitmapinfoheader[40];
    char bitmapv2infoheader[52];
    char bitmapv3infoheader[56];
    char bitmapv4header[108];
    char bitmapv5header[124];
}DIBHeader;
void show_header(BMPHeader cab){
    printf("Signature:  %c%c\n", cab.signature[0], cab.signature[1]);
    printf("Tamaño:  %i\n", cab.size);
    printf("Datos de imagen: %i (%Xh)\n", cab.offset, cab.offset);
}
void show_dib(DIBHeader dib){
    printf("Nucleo del mapa de bits: ");
    for(int i=0; i<12; i++)
        printf(" %i ", (int)dib.bitmapcoreheader[i]);
    printf("\n");
    printf("Cabeza del mapa: ");
    for(int i=0; i<64;i++)
        printf(" %i ", (int)dib.os22xbitmapheader[i]);
    printf("\n");
    printf("Informacion cabeza bitmap: ");
    for(int i=0; i<40; i++)
        printf(" %i ", (int)dib.bitmapinfoheader[i]);
    printf("\n");
    printf("Informacion V2 cabeza bitmap: ");
    for(int i=0; i<52;i++)
        printf(" %i ", (int)dib.bitmapv2infoheader[i]);
    printf("\n");
    printf("Informacion V3 cabeza bitmap: ");
    for(int i=0; i<56; i++)
        printf(" %i ", (int)dib.bitmapv3infoheader[i]);
    printf("\n");
    printf("Cabeza V4: ");
    for(int i=0; i<108; i++)
        printf(" %i ",(int)dib.bitmapv4header[i]);
    printf("\n");
    printf("Cabeza V5: ");
    for(int i=0; i<124; i++)
        printf(" %i ",(int)dib.bitmapv5header[i]);
    printf("\n");

}
int main(){
    BMPHeader header;
    DIBHeader dib;
    FILE *pbmp = NULL;
    if(!(pbmp = fopen("a.bmp","rb+"))){
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
