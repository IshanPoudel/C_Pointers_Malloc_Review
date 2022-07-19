#include <stdio.h>
#include <stdlib.h>


// Takes in an int pointer as an argument
void triple(int * u)
{
	*u = 3 * (*u);
}

int main(int argc, char const *argv[])
{

	int value =3;

    // triples the value
	triple(&value);

	printf("The new values is %d" , value);
	
	return 0;
}

