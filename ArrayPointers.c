#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	
	// The name of the array by itself is a pointer to the first value
	int data[] = { 1 , 3 , 4 , 57 , 7};
	int * ptr;
	ptr = data;


	for (int i=0; i<5;i++)
	{
		printf("The pointer to the %dst value (i.e %d) is %p\n", i , data[i] , data+i );
	}
	return 0;
}