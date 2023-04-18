//to find the max among three integers

#include<stdio.h>
#include<stdlib.h>
//int max(int a , int b , int c){
//	if (a>b){
//		if (a>c)
//		    return a;
//		else 
//		    return c;	
//	}
//	else if (b>c)
//	    return b;
//	else 
//	    return c;
//}
//
// int main(){
// 	int a,b,c;
// 	int greatest;
// 	printf("Enter the first number: ");
// 	scanf("%d",&a);
// 	printf("Enter the second number: ");
// 	scanf("%d",&b);
// 	printf("Enter the third number: ");
// 	scanf("%d",&c);
// 	greatest = max(a,b,c);
// 	printf("the max among the three is %d",greatest);
// 	return 0;
// }
 
 //average finder 
 
 float avg(int a,int b,int c)
 {
 	float av ;
 	av = (a+b+c) / 3.0;
 	return av;
 }
 int main()
 {
    int a, b ,c;
    printf("Enter  3 grades: ");
    scanf("%d %d %d ", &a, &b, &c);
    
    printf("the average marks scored are : %f",avg(a,b,c));
    return 0;	
 }
 
 
