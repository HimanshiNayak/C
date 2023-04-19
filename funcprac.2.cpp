//area calculator

#include<stdio.h>
float area(int l,int b){
	float lb;
	lb = l*b;
	return lb;
}

int main(){
	int l ,b;
	float lb;
	printf("enter length: ");
	scanf("%d",&l);
	printf("enter breadth: ");
	scanf("%d",&b);
	lb = area(l,b);
	printf("the area of the rectangle is: %f",area(l,b));
	return 0;
}

//greatest digit in a two digit number
#include <stdio.h>
void maxdigit(int num ){
	if (num >99 || num<10 )
	    printf("The number is not a 2-digit number!!");
	else
	    {
	      if (num%10 > num/10)	
	          printf("Maximum digit in %d is %d :",num,num%10);
	      else 
	          printf("Maximum digit in %d is %d :",num,num/10);
		}
}

int main(){
	int num ;
	printf("Enter a number: ");
	scanf("%d",&num);
	maxdigit(num);
	return 0;
}
