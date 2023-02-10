// double or triple digits

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>=10 && num<=99){
        printf("Double-Digit");
    }
    else if (num>=100 && num<=999){
        printf("Triple-Digit");
    }
    else {
        printf("The number is neiher double nor triple.");
    }
    return 0;
}



// absolute number:

#include <stdio.h>
#include <math.h>

int main(){
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number>=0){
        printf(" The absolute value of %d is %d \n" ,number);
    }
    else {
        printf("The absolute value of %d is |%d|\n",number ,(-1)*number);

    }
    return 0;
}
