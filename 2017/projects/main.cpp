
#include <stdlib.h>
#include <strings.h>
#include "comun.h"
#include "interfaz.h"
int main(){
 char a[N][N];
 bzero(a,sizeof(a));
 for(int f=0; f<N; f++)
	 for(int c=0; c<N; c++){
	 design();
	 matriz(a);
	 cerouno(&a[f][c]);
	 }
	return EXIT_SUCCESS;
}
