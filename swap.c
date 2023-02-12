// swapping two variables;


// 1.eg 1
#include <stdio.h>
int main(){
    int a = 10;
    int b = 5;
    int temp;
    printf(" the calue of a is %d\n" ,a);
    printf(" the value of b is%d\n" ,b);
    temp = a;
    a = b;
    b = temp;
    printf(" the calue of a is %d\n" ,a);
    printf(" the value of b is%d\n" ,b);
    return 0 ;

}

// 2.eg2

#include <stdio.h>
int main(){
    float a = 1.2;
    float b= 3.2;
    float temp;
    printf(" the value of a is %f\n" ,a);
    printf(" the value of b is%f\n" ,b);
    temp = a;
    a=b;
    b= temp;
    printf(" the calue of a is %f\n" ,a);
    printf(" the value of b is%f\n" ,b);
    return 0;
}

