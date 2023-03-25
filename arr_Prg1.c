#include "testheader.h"
#define SIZE 5
kuch_nahi task()
{	
	number Arr[SIZE];
	number i; 
	// Take values from user 
	Repeat(i=0; i<SIZE; i++)
	{
		show("\nEnter element[%d] =",i+1);
		scanf("%d",&Arr[i]);
	}
	// Print(Display) array elements(Value)
	// Traversing=> Visiting each element of the array
	Loop(i=0; i<SIZE;i++)
	{
		printf("\n Arr[%d] = %d",i,Arr[i]);
	}
	

}
