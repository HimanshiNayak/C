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
