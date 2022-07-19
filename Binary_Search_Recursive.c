// #Implement Binary Search
// to find , it slits the array into sub-halfs and solves them recursively
// given a number , finds its positoon in the array


#include <stdio.h>
#include <stdlib.h>

int binary_search(int int_array[] , int left , int right , int number)
{
	// #base case
	// 

	int position;

	int mid = (left+right)/2; 
	printf("The value of mid is %d\n", mid); // odd number rounds down
	// check if our value is in the mid
	if (int_array[mid]== number)
	{
		printf("Value found in  position %d\n" , mid);
		return mid;

	}

	else if (number > int_array[mid])
	{
		printf("I called the function from %d to %d\n" , mid+1 , right);
		position = binary_search(int_array , mid+1 , right , number);
		
		return position;

	}

	else
	{
		printf("I called the function from %d to %d\n" , left, mid-1);
		position = binary_search(int_array , left , mid-1 , number);
		
		return position;

	}
	
	
}
int main()
{
	int list[] = {1 , 3 , 5 , 6 ,7 , 8};
	int number = 7;
	// binary_search(array_address , starting , ending , number_to_search)

	int position_of_number;

	position_of_number = binary_search(list , 0 , 5 , number);

	printf("The number is found in %d position" , position_of_number);


}