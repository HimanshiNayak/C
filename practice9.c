// calculator

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1,num2;
    char mathoperator;
    printf("Enter first number: \n");
    scanf("%d",&num1);
    printf("Enter any operator between ('+','-','*','/'): \n");
    scanf("%c",&mathoperator);
    printf("enter  second number: \n");
    scanf("%d",&num2);

    switch(mathoperator)
    {
        case '+':
            printf("%d %c %d = %d \n", num1,mathoperator,num2,num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d \n",num1 , mathoperator,num2 ,num1-num2);
            break;
        case '*':
            printf("%d %c %d = %d \n",num1,mathoperator,num2,num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("you cannot divide by 0!\n");
            else
                printf("%d %c %d is:%d \n",num1 ,mathoperator , num2, num1/num2);
            break;

        default :
             printf("Invalid mathematical operation ....Try again!");
        
    }

    return 0;
}

















