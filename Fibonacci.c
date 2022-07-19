#include <stdio.h>
#include <stdlib.h>

int fibonacci(num){
	if (num <2)
	{
		return 1;
	}
	int value;

	value = fibonacci(num-1) + fibonacci(num-2);

	return value;

}

int main()
{
	int num =10;


	for (int i=0; i<num;i++)
	{
		printf(" %d" , fibonacci(i));
	}

	// output = fibonacci(10);

	// print the first 3 fibonacci numbers


	

}