// takes the value , checks the condition and then executes

//1. print * 10 times

//#include <stdio.h>
//int main(){
//	int  i= 1 ;
//	while (i<=10){
//		printf("*");
//		i = i+1;
//	}
//	return 0;
//}

//2. take the number of * to be printed from the user and print

# include <stdio.h>
int main(){
	int a;
	int i; //to start from 1 , define i=1
	printf("Enter the number of * to be printed:\n");
	scanf("%d",&a);
	while (i<=a)
	{
		printf("*");
		i++;
	}
	return 0;
}
