// properties :
//1. execution starts from main
//2. a function gets called directly or indirectly from main
//3.there can be multiple functions in a program

//types of functions:
//1. library functions: special functions in c
//can be executed by using stdio.h
//2.user defined functions: declared and dedined by the user

//passing arguments:
//can take(parameters) and give some values (return value)

//three ways to pass arguments:

//void func(); .... no return
// void func(int n);  .... no return
//int func(inta,intb);  ....returns the thing its doing , and return type will be int


//func to take 2 int and return their sum;
#include <stdio.h>
int  sum(int a,int b);
int main(){
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
    int s= 	sum(a,b);
	printf("The sum of the entered numbers is: %d",s);
	
	return 0;	
}
int sum(int a,int b){
	return a+b ;
	
}

