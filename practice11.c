// reversing a no

#include <stdio.h>
int main(){
    int num;
    int units , tens , hundreds;
    printf("Enter a three digit no.: ");
    scanf("%d",&num);
    units = num%10;
    tens = (num/10)%10;
    hundreds = num/100;

    printf("the reverse of %d is: %d%d%d",num,units , tens , hundreds );
    return 0;

}
//                      or

#include <stdio.h>
int main(){
    int num , reversenum;
    int units , tens , hundreds;
    printf("Enter a three digit no.: ");
    scanf("%d",&num);
    units = num%10;
    tens = (num/10)%10;
    hundreds = num/100;
    reversenum = units; //eg ;-234  ....4
    reversenum = reversenum*10+tens; //43
    reversenum = reversenum*10+hundreds; //432
    printf("reversed number is %d",reversenum);
    return 0;
}