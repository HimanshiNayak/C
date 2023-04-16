// to reduce code duplications in while loop many times 

// 1.to calculate the total price of the items 

#include<stdio.h>
//int main(){
//	int price , totalprice = 0;
//	do{
//		printf("Enter the prices write  or "0" to end \n");
//		scanf("%d",&price);
//		totalprice= price + totalprice;
//}
//while(price != 0);
//printf("Total price of your orders is:%d \n",totalprice);
//return 0;
//}

////2. to calculate the total marks of a student
//int main(){
//	int marks, totalmarks =0;
//	do {
//		printf("Enter your marks , enter'-1' to end: \n");
//		scanf("%d",&marks);
//		totalmarks = marks + totalmarks;
//	} while(marks != -1);
//	printf("The total marks are : %d \n",totalmarks);
//	return 0;
//}

//3. valid grade
int main(){
	int marks;
	do {
		printf("Enter  marks between 0-100: \n");
		scanf("%d",&marks);
	
	}while(marks<0 || marks>100); // here opposite conditions ae to be taken as we need to terminate the loop
	printf(" Thanks! You have entered %d , which is a legit grade!" ,marks);
	return 0;
}


