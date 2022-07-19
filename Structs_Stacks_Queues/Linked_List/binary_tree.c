
#include <stdio.h>
#include <stdlib.h>

// #everything to the left of a node is smaller than it
// everything to the right of a node is bigger than it. 

//              8
//       6            10

//   3       7    9       11






struct node
{
	int num;
	struct node* left;
	struct node* right;
};

struct node* root;

int isempty(struct node* A)
{
	if (&(A->num) == NULL)
	{
		return 1;
	}

	if (A->left == NULL)
	{
		return 1;
	}
	if(A->right == NULL)
	{
		return 1;
	}

	return 0;
}

void Insert( int num)
{

	struct node *temp = (struct node*) malloc(sizeof(struct node));

	temp->num = num;
	temp->left = NULL;
	temp->right = NULL;
	

	if (root == NULL) //i.e root is NULL
	{
		
		root = temp;
		
		printf("Initialized the root with the value %d\n",root->num );
		return;

	}


	// Need to check to see if the value of root is not NULL

	//now compare the value with the value just above it. 
	//start from the root and go left or right until you find an empty node
	

	
	struct node *temp2 = (struct node*) malloc(sizeof(struct node));
	temp2 = root;

	// go left or right
	while(temp2->left !=NULL & temp2->right !=NULL) 
	//change the logic so that if one of the space is empty and is the right way to go , break
	// if you encounter an empty node stop the while loop
	{
		if (num < temp2->num)
		{
			//go left
			temp2 = temp2->left;
		}
		else 
		{
			temp2 = temp2->right;
		}
	}

	// at this point the point the we need to put the new value in either left or right.
	if(num <temp2->num)
	{

		temp2->left = temp;
		
		printf("Initialized %d to the left of  %d \n" , num , temp2->num);
	}
	else 
	{
		temp2->right = temp;
		
		printf("Initialized %d to the right of  %d \n" , num  , temp2->num);
	}
	


	

}


int main()
{
	// First value gets inserted as the root

	Insert( 6);
	Insert( 3);
	
	Insert( 9);
	Insert(2);
	Insert(4);
	Insert(7);

}