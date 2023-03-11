#include <stdio.h>
#include <stdlib.h>
int main (){
    int num1 = 5,num2 = 2;
    int result;
    result = num1/num2;
    printf("the result = %d", result);

    float num3 = 5, num4 = 2;
    float results;
    results = num1/num2;
    printf("the result = %f " , results);

    int num1 = 5, num2 = 2;
    float results;
    results = num1/num2;
    printf("the result = %f", results);

    return 0;
}
// int wih float is float

// when we have two int but if we want the result to be float;

#include <stdio.h>
#include <stdlib.h>
int main (){
    int num1 = 5 ,  num2 = 2;
    double result;
    result = num1/(double)num2;
    printf("the result = %lf" , result);
    return 0 ;
}
