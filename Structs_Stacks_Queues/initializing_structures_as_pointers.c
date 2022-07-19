#include <stdio.h>
#include <stdlib.h>

struct person
{
	int age;
	int * ptr_to_age;
	struct person *ptr_to_next_person;
}; 

int main()
{
	struct person next_person;
	struct person temp;
	struct person *sp;


    
	int age = 45;
	temp.age = age;
	temp.ptr_to_age=&age;
	temp.ptr_to_next_person= &next_person;

	// store temp in sp
	sp = &temp;



	printf("%d\n" , sp->age);
	printf("%p\n" , sp->ptr_to_age);
	printf("%p\n", sp->ptr_to_next_person );
	

}