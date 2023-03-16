// char can have only one thing , space is also not allowed

//if -else
//if(condition){
      //expression;
//  }
//  else {
//  	expression;
//  }

// else is not independent , not necessary also

//adult or not

#include<stdio.h>
int main(){
 int age;
 printf("Enter your age:\n");
 scanf("%d",&age);

 if(age>=18){
 	printf("You are an adult.\n");
 	printf("You can drive.\n");
 }
 else{
 	printf("You are not an adult.\n");
 }
 printf("Thank you"); // will always be printed
      
      //else if ladder;

// if - elseif- else
 int age;
 printf("Enter your age:\n");
 scanf("%d",&age);
  if(age>=18){
 printf("Adult.\n");
printf("You can drive.\n");
 return 0;
}


