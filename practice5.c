// 1. grades average

#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade1 , grade2 , grade3;
    double average;
    printf("enter your grades in first subject: ");
    scanf("%d",&grade1 );
    printf("enter your grades in second subject: ");
    scanf("%d",&grade2 );
    printf("enter your grades in third subject: ");
    scanf("%d",&grade3 );
    average = (grade1+grade2+(double)grade3)/3;
    printf("your average is: %lf",average);
    return 0 ;
}

// 2.weather station:

#include <stdio.h>
int main (){
    double celsius , fahrenheit;
    printf("what is the temp in degree celsius: ");
    scanf("%lf",&celsius);
    fahrenheit = ((celsius*9)/5)+ 32 ;
    printf("the temp in fahrenheit is : %.1lf" ,fahrenheit);
    return 0 ;
}

