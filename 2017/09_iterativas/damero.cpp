
#include <stdio.h>
#include <stdlib.h>

void cua(int l){
    /*Pintar cada:
     *  fila de cuadrados, 
     *  fila,
     *   columna de cuadrados,
     *    columna
     *    si f+c = par pintar cuadrado
     *    sino pintar espacio
     *    y hacer un salto de línea*/
    for (int fc=0; fc<l; fc++)
        for(int f=0; f<l; f++){
            for(int cc=0; cc<3;cc++)
                for(int c=0; c<3; c++)
                    if((fc + cc) % 2)
                        printf("    ");
                    else
                        printf("T_T ");
            printf("\n");
        }
}
int main(){
    cua(3);
    return 0;
}
