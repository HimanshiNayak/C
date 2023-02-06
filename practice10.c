// removing the decimal part of float:

#include <stdio.h>
int main(){
    float data;
    printf("Enter the data of floating point type: " );
    scanf("%f",&data);
    printf("the decimal part of the given float is :%.2f\n" ,data-(int)data);
    return 0;

}

// sum of triple digits:
// by using the divion operators:

#include <stdio.h>
int main()
{ 
    // for the unit place , we have the remainder as the digit after dividing it with 10..
//   for tens , (num/10) = we'll get hundreds and tens place ...then modulus gives the tens place
// for hundreds : divide by 100
    int num;
    int units , tens,hundreds;
    printf("enter a  three digit no.: \n");
    scanf("%d",&num);
    units = num%10;
    tens = (num/10)%10;
    hundreds =num / 100;
    printf("the sum of the digits of the no. in %d is %d\n ",num ,units+tens+hundreds );
      return 0;
}

// eg := 523
// units = 523%10=3
// tens = 523/10 = 52%10 = 2
// hundreds = 523/100 = 5
