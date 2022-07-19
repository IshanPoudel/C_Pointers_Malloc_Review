#include <stdio.h>
#include <stdlib.h>


void margo(int * u, int * v)
{ 
	int mar;
	mar = *u;
	*u = *v;
	*v = mar;
}



int main(void)
{ 

	int x = 5, y = 10;
	printf("Originally x = %d and y = %d\n", x,y);
	margo(&x, &y);
	printf("Now x = %d and y = %d.\n", x,y);
	return 0;
}


