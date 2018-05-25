
#include <stdio.h>
#include <stdlib.h>

int main(){
        int num = 0x1234;
        FILE *fic = fopen("b.int","w");
        fwrite(&num,sizeof(int),1,fic);
        fclose(fic);
	return EXIT_SUCCESS;
}
