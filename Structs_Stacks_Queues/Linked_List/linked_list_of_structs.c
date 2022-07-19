#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};


void traverse(struct node *A)
{

	//we get the pointer to the first value as the head

	struct node *temp ;
	temp = A;

	while(temp!=NULL)
	{
		printf("The value at the node is %d\n", temp->data );
		temp = temp->next;
	}

}

int main(int argc, char const *argv[])
{
	struct node *A;

	A = NULL;

	struct node *temp;
	temp = (struct node *) malloc(sizeof(struct node));
	// #malloc pointer typecasted to node *
	temp->data = 2;
	temp->next = NULL;

	A = temp;

	

	// Adding a new node
	struct node *B;
	temp = (struct node *) malloc(sizeof(struct node));
	temp->data = 4;
	temp->next = NULL;

	B = temp;
	

	// point the first node to the next
	A->next = B;

	// Adding a new node
	struct node *C;
	temp = (struct node *) malloc(sizeof(struct node));
	temp->data = 16;
	temp->next = NULL;

	C = temp;
	

	// point the first node to the next
	B->next = C;




	traverse(A);


	
	return 0;
}