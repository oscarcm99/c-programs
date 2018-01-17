
#include <stdio.h>
#include <stdlib.h>
#define N 3
bool es_borde(int f, int c){return c == 0 || c == N || f == 0 || f == N;}
bool diag_principal(int f, int c){return f == c;}
bool diag_inversa(int f, int c){return f+c == 3 ;}
int main(){
    for(int h=0; h<3; h++){
    for(int a =0; a<1; a++){ 
    for (int f = 0; f<3; f++){
            for (int c = 0; c<3; c++)
                if(es_borde(f, c) || diag_principal(f,c) || diag_inversa(f,c))
                    printf("*** ");
                else
                    printf(" ");
        printf("\n");
        }
        }
    }
        printf("\n");
        return EXIT_SUCCESS;
}
