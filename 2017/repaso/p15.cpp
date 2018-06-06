
#include <stdio.h>
#include <stdlib.h>
bool tiene_divisor(int dividendo, int divisor){
	if(divisor<=1 || dividendo<=divisor)
		return false;
	if(dividendo % divisor == 0)
		return true;
return tiene_divisor(dividendo, divisor-1);
}
int main(){
        if(tiene_divisor(7,3))
		printf("Si\n");
	else
		printf("No,\n");
	return EXIT_SUCCESS;
}
