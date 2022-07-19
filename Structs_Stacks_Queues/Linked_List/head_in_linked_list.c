#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};



struct node *head;

void traverse(struct node *head)
{

	//we get the pointer to the first value as the head

	struct node *temp ;
	temp = head;

	while(temp!=NULL)
	{
		printf("The value at the node is %d\n", temp->data );
		temp = temp->next;
	}

}

void Insert(int data , int pos)
{
	struct node *temp1 = (struct node*) malloc(sizeof(struct node));
	temp1->data = data;
	temp1->next = NULL;

	
	if (head == NULL)
	{
		head = temp1;
	}

	struct node* temp2 = head;

	while (temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}

	// At this point , we are at a positon to add the new value and 

	temp2->next = temp1;
	temp1->next = NULL;
}

int main()
{

	head = NULL;

	Insert(2 , 1);
	Insert(3,1);
	Insert(4,1);
	Insert(5,1);
	// Insert value 2 at position 1.

	traverse(head); 





}
