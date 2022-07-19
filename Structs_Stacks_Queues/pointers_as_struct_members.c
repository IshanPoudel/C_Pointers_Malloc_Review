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

	struct person temp;
	struct person next;
	int age = 45;
	temp.age = age;
	temp.ptr_to_age=&age;
	temp.ptr_to_next_person= &next;

	printf("%d\n" , temp.age);
	printf("%p\n" , temp.ptr_to_age);
	printf("%p\n", temp.ptr_to_next_person );
	

}