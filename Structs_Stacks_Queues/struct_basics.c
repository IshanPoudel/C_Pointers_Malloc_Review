#include <stdio.h>
#include <stdio.h>

struct  arrayStruct
{
	int data[2][3];
	double values[4];

	
};

int main()
{
	struct arrayStruct numbers = { { {1 ,2 ,3 } , {4 , 5 , 6} } , {0.4 , 5.6 , 7.8 ,10} };

	for (int i=0; i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("The value at the position is %d\n"  , numbers.data[i][j]);
		}

	}

}