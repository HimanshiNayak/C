// equalitycheck :
// for two no.

#include <stdio.h>
int main (){
    int a ,b,;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
   
    if (a==b ){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}


// for three no.

#include <stdio.h>
int main (){
    int a ,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if (a==b && b==c){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}


//ascending order;

#include <stdio.h>
int main(){
    int num ;
    int units , tens , hundreds;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    units = num%10;
    tens = (num/10)%10;
    hundreds = num/100;
    if (hundreds<tens<units){
        printf("ASCENDING");
    }
    else
        printf("NOT ASCENDING");
    return 0 ;
}

// positive , negaive or zero

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0){
        printf("1");
    }
    else if (num==0) {
        printf("0");

    }
    else 
        printf("-1");
    return 0;
}