// outputs factorials
#include <stdio.h>
#include <stdlib.h>


int recursion(int number)
{
	int value;
	
	if (number == 0)
	{
		return 1;
	}

	printf("I am in stack %d\n" , number-1);
	

	

	value = number * recursion(number-1);
	printf("The valueof value at this point is %d \n" , value);
	


	return value;

}

int main()
{
	int recursive_value = 0;

	recursive_value = recursion(5);

	printf("The recursive value is  %d " , recursive_value);
}