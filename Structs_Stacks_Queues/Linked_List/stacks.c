#include <stdio.h>
#include <stdlib.h>


// Stacks , last in first out , 
// Things get added to the head
// Head gets deleted

struct node
{
	int age;
	struct node* next;
	
};




struct node *head; //head is the pointer  , *head is dereferencing it

void stack(int num)
{
	// printf("I am here\n");

	struct node * temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp->age = num;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		printf("%d is added as the first entry \n", head->age );
		return;
	}

	temp->next = head;
	head = temp;
	printf("%d is added\n" , head->age);




	

	

	return;
}


void pop()
{
	// Pop the head
	

	struct node * temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp = head;
	

	head = temp->next;
	free(temp);
	printf("%d is popped\n" , head->age);


}

void print(){

	struct node*temp=head;
	printf("List is:");
	while(temp!=NULL)

	{
		printf("%d ",temp->age); 
		temp=temp->next;   
	}
	printf("\n");
}

int main()
{

	struct node *head = NULL;
	// Initialize the head as null

	stack(20);

	
	stack(80);
	pop();
	
	stack(80);
	pop();
	stack(50);

	print();



}