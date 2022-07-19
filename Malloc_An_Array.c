#include <stdio.h>
#include <stdlib.h>


int main()
{
	// create an array of size 10

	int *p;
	p = (int*) malloc(10 * sizeof(int));

	// #p is the pointer which stores the value of p

	for (int i=0; i<10;i++)
	{
		p[i] = 1 + i;

	}

	for (int i=0; i<10;i++)
	{
		printf("%d \n" , p[i]);
	}

	// Free is used to deallocate the memory

	free(p)
}
