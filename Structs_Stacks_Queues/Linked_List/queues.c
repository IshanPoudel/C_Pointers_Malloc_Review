#include <stdio.h>
#include <stdlib.h>


// Queues FIFO 
// thing added gets added in the last position
// thing to remove is the head.

struct node
{
	int age;
	struct node* next;
	
};


struct node *head; //head is the pointer  , *head is dereferencing it


void dequeue()
{
	// REMOVE THE FIRST ENTRY
	

	struct node * temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp = head;
	

	head = temp->next;
	free(temp);
	printf("%d is popped\n" , head->age);


}

void enqueue(int num)
{


	struct node * temp ;
	temp = (struct node*) malloc(sizeof(struct node));
	






	
	

	// add things 
	

	

	if (head==NULL)
	{
		temp->age = num;
		head = temp;
		head->next = NULL;
		printf("Added first entry %d\n" , head->age);
		return;
	}

	temp = head;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}

	struct node * temp2 ;
	temp2 = (struct node*) malloc(sizeof(struct node));

	temp2->age = num;
	temp2->next = NULL;

	// At this point the next entry is the empty node 
	temp->next = temp2;
	printf("Added  entry%d\n" , temp2->age);
	



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
	enqueue(10);
	enqueue(20);
	enqueue(40);
	enqueue(80);
	dequeue();
	print();
	enqueue(80);
	print();
	dequeue();
	dequeue();
	print();

}