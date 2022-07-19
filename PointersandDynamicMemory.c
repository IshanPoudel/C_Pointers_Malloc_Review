#include <stdio.h>
#include <stdlib.h>

int main()
{
	// For a typical running environment 
	// you have heap at the top , then stcks , then globla varaibles , then the code executable
	// the stack is used in a LIFO  way , used for recursion
	// heap is used for dybnamic allocation of memory

	int x; //Will be stored in the stack
	int *p;


	// How does malloc work?
	// Dynamically allocates a size of memory in the heap
	// Retiurns a pointer of type void 
	// The pointer can be typecasted into anything aka you can use it to store int , char , struct , etc

	p = (int *) malloc(5 * sizeof(int));

	// p is an int  pointer that has 20 bytes of memory


	// allocates 20 bytes of memory anbd uses i

	*p = 50;

	printf("The value sotred at address %p is %d\n" , p , *p );
}