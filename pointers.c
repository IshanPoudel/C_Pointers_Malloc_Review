#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num =3;
	int num1 = 5;

	int* num_ptr ;
	num_ptr = &num;

	// A pointer is a variable whose value is a memory address



	printf("The value of num is %d\n" , num);
	printf("The address at num is %p\n"  , &num);
	printf("The value of pointer is %p\n" , num_ptr);
	

}