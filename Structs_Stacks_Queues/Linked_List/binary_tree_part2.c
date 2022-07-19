
#include <stdio.h>
#include <stdlib.h>

// #everything to the left of a node is smaller than it
// everything to the right of a node is bigger than it. 

//              8
//       6            10

//   3       7    9       11

// need to have empty nodes. 

/// the way part 1 works is that it fills out any non-empty nodes before moving . 
// need to have the option of having non-empty nodes
// and need to move onto the next position

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

	//check the number and see where to go

	printf("\n");

	while(temp2->left!=NULL || temp2->right!=NULL)
	{
		//as long as there is an empty node
		//check which node to get into
		if (num < temp2->num)
		{
			printf("Going to the left of %d\n" , temp2->num);
			// go to the left and see if it is empty

			if(temp2->left == NULL)
			{
				// it means the left node is empty so we need not need to go further.
				// need a way to abort
				break;
			}
			else
			{
				temp2=temp2->left;

			}
			
		}
		else
		{
			//go to the right and see if it is empty , 
			printf("Going to the right of %d\n" , temp2->num);
			//check if null
			//if null , abort
			//if not , continue
			if(temp2->right == NULL)
			{
				//need a way to abort
				break;

			}
			else
			{
				temp2=temp2->right;

			}
			

		}
	}


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


	
		
	//way to link the values
		


	

}


int main()
{
	// First value gets inserted as the root

	Insert(6);
	Insert(3);
	Insert(2);
	Insert(9);
	
	Insert(4);
	Insert(7);
	
}