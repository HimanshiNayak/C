// pass or fail

#include <stdio.h>
#include <stdlib.h>
int main(){
    int grade;
    printf("Enter your grades: ");
    scanf("%d",&grade);
    if (grade >= 60)
        printf("Congratulations! \n");
    // no : for if here, nothing is used
    else 
        printf("Sorry ....You have failed!\n");
    return 0;
}

// greater between the two no.

#include <stdio.h>
int main(){
    int num1 , num2;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);
    if (num1>num2)
       printf("the greater is %d\n" , num1);
    else 
       printf("the gearter is %d\n",num2);
    return 0;

}

// even odd

#include <stdio.h>
int main(){
   int num;
   printf("Enter a no.: \n");
   scanf("%d",&num);
   if (num%2==0)
      printf("%d is even",num);
   else
      printf("%d is odd" , num);
      return 0;

}

// max min

#include <stdio.h>
int main(){
   float num1 , num2;
   printf("Enter num1: " );
   scanf("%f",&num1);
   printf("Enter num2: ");
   scanf("%f",&num2);
   if (num1>num2)
      printf("max: %.2f \n min: %.2f" , num1,num2);
   else
      printf("max: %.2f\n min: %.2f " , num2,num1);
      return 0;
}
for two print statements after the if , use {
   printf
   printf
     }


// max min are 

#include <stdio.h>
int main(){
   int num1, num2, num3, max ;
   printf("Enter three numbers: ");
   scanf("%d%d%d",&num1,&num2,&num3);
  
   if ((num1>num2) &&(num1>num3))
   {
        max= num1;

   }
   else if ((num2>num3)&&(num2>num3))
   {
         max = num2;
   }
   else if ((num3>num1)&&(num3>num2)) 
   {
         max = num3;
   } 
   
   printf("Maximum among all three numbers = %d ",max);
   return 0;

}





