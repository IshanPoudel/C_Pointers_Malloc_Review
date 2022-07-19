#include <stdio.h>
#include <stdlib.h>


struct node
{
	
	int value;
	struct node* next;
};

// If there is already a value at the desired position , we add it to the next one. If 3 is full
 // , we add it to 4


struct node *head;

void print(){

	struct node*temp=head;
	printf("List is:");
	while(temp!=NULL)

	{
		printf("%d ",temp->value); temp=temp->next;   
	}
	printf("\n");
}


void Insert(int number , int pos)
{
	struct node *temp1 = (struct node* ) malloc(sizeof(struct node));
	temp1->value = number;
	temp1->next = NULL;

	// If at the first position
	if (pos == 1)
	{

		// add value to the head
		//whatever is in the head gets pushed one step back
		temp1->next = head;
		head = temp1;
		return;

		//whatever is in the head gets pushed one step back
		

	}

	// traverse until you get to the position you want

	int n=1;
	struct node *temp2 ;
	temp2 = head;
	
	while (n < (pos-1))  // on the condition that the position we want to insert into is not empty
	{
		printf("I am here\n");
		temp2 = temp2->next; 
		n++;

	}

	// At this point temp2->next is the position where I want to insert a value

	temp1->next = temp2->next;
	// temp1 has the value to be inserted , it needs to point to the value the (n-1)th value pointed at
	temp2->next = temp1;

	//what if there are other values

}


void Delete( int pos)
{
	// on the assumption that the number we want to delete is actually in the list

	struct node *temp = head;

	//if we want to delete the head

	if (pos ==1)
	{
		head = temp->next;
		return;

	}

	// if we want to delete something else
	// go to the node just to the left of the desired position
	int n =1;
	while (n!=pos)
	{
		temp = temp->next;
		n++;
	}

	// at this point , temp->next gives the node which should be desired. 
	
	struct node *temp2 = temp->next;
	temp->next = temp2->next;

}

int main()
{

	Insert( 100 , 1);
	Insert(200 , 2);
	Insert( 600 , 3);
	Insert(300 , 4);
	Insert(700 , 5);
	
	Insert(800 , 4);
	Insert(700,1);
	Delete(1);
	// Delete(3);

	print();

}