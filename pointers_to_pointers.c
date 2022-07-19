#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num=5;
	int * ptr ;
	ptr = &num;

	// create a pointer to a pointer
	// to create a pinter to a pointer we use int**
	int ** ptr_to_ptr = &ptr;
	// stores the address of the varaible ptr which is 
	// itself of the type pointer which points to address of varaible num

	

	// Indirection

	// numptr is a pointer 
	// 
	// i.e int * numptr = num; which means it will store the address of the variable num
	// then on the nextline if we do , 
	// *numptr (similar to int **numptr) it will dereference the pointer and point to the value i.e store the value of the address


	printf("ptr is %p\n" , ptr);
	printf("*ptr is %d\n" , *ptr);

	

	printf("**ptr_to_ptr is %d\n" , **ptr_to_ptr);

	// Analogy , red clay is num , yellow clay is pointer to yellow clay , green clay = pointer to yellow clay
	// Using indirection means moving the  clay to its predecessor
	// *ptr is moving yellow clay to red clay so you get the value, 
	// **ptr_to_ptr  is moving green clay to yellow clay which is moving to red clay
	// Using & is going the other way
	printf("&ptr is the address of the ptr aka the pointer to the pointer %p\n" , &ptr);
	
	printf("ptr_to_ptr is %p\n", ptr_to_ptr );

	// ptr_to_ptr is the same as &ptr , *ptr_to_ptr is the address of 











}