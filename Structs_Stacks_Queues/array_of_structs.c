#include <stdio.h>
#include <stdlib.h>
#define CHAR_SIZE 20


struct Person {

	int age;
	char name[CHAR_SIZE];
	char major[CHAR_SIZE];

};
int main()
{

	struct Person Ishan = { 21 , "Ishan" , "Computer Science"};
	struct Person Aryan = { 15 , "Aryan" , "Minecraft"};

	// Create a struct of arrays 
	struct Person people[] = {Ishan , Aryan};

	int rows = sizeof(people)/sizeof(people[0]);

	printf("The number of rows is %d\n" ,rows );
	

	// Iterate through the structs

	for (int i=0; i<rows;i++)
	{
		printf("For struct %d\n" , i+1);
		
		printf("Major  of %s :  %s\n" , people[i].name , people[i].major );

	}

}