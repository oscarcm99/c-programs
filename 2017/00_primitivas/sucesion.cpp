
#include <stdio.h>
#include <stdlib.h>

int main(){
        int iii,
            ooo;
       printf("Introduce el primer numero: ");
       scanf(" %i", &iii);
       printf("Introduce el segundo numero: ");
       scanf(" %i", &ooo); 
       if(iii>=ooo){
        printf("El numero mayor es %i\n", iii);
       }
       if (ooo>=iii){
        printf("El numero mayor es %i\n", ooo);   
       }
	return EXIT_SUCCESS;
}
