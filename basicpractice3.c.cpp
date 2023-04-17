// take an integer output

#include<stdio.h>
#include<stdlib.h>
int main (){
	//int a,square,cube;
    //printf("Enter any integer Value: \n");
    //scanf("%d", &a);
    //printf("Value = %d Square = %d Cube = %d\n" , a,a*a,a*a*a);
     //printf("Value\tSquare\tCube\n%d\t%d\t%d" , a,a*a,a*a*a);
    int a , b;
    printf("Enter any integer Value: \n");
    scanf("%d", &a);
    //printf("Enter another integer Value: \n");
    //scanf("%d", &b);
    //printf("max value is: %d\nmin value is: %d" ,a>=b?a:b,a<=b?a:b);
    if (a>=0)
    {
    	//printf("Positive Number.\n");
    	if (a%2==0)
    	{
    		printf("The entered number is positive-even.\n");
		}
		else
		{
			printf("The entered number is -positive-odd.");
		}
	}
	else if (a==0)
	{
		printf("The number is neither positive nor negative.\n");
		printf("The number is even.\n");
	}
	else 
	{
		//printf("The number is negative.\n");
		if (a%2==0)
    	{
    		printf("The entered number is negative-even.\n");
		}
		else
		{
			printf("The entered number is negative-odd.");
		}
	
		
	}
	return 0;
}
	//prefer ternary over if-else
	
	//Even odd using ternary 
	//a%2==0? printf("Even"):printf("Odd");
	
	// positive - negative
   // a>=0?printf("positive"):printf("negative")
   
//   both 
//((a>=0)&&(a%2==0))?printf("welcome"):printf("bye")

//to check if the number is the power of 2 or not 
//according to binary number system , we can get whether it is 2^n or not by using the and operator , as the powers of two with their preceeding terms give  
//0 when and operation is performed 
//((a &&(a-1))) ==0?printf("power of 2"):printf("not a power of 2")
//multiply with 8 without using arithmatic operator

//str without ;
//if (printf("Himanshi"))
//{
//}
	
    
//with '=' it gave 0 as false ...with anythingelse it will give 0 as it is false.
//with float , it gives int.
//for more tha 10 digits , will give another answer 
//if we take some input from user , then after the scanf statement ,perform expressions otherwise ERROR
