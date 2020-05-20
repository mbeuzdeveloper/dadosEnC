#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x;
	srand((unsigned)time(NULL));
	x=rand();
	printf("Dado de 6, dice: %d\n",(x%6)+1);
	return(0);
}
