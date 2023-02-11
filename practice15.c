// // which quadrant the point belongs to:

#include <stdio.h>
int main(){
    int x , y;
    printf("Enter the x co-ordinate: \n");
    scanf("%d",&x);
    printf("Enter the y co-ordinate: \n");
    scanf("%d",&y);
    if (x==0 && y==0){
        printf("Origin");
    }
    else if(x>0 && y>0){
        printf("First Quadrant");
    }
    else if(x<0 && y>0){
        printf("Second Quadrant");
    }
    else if (x<0 && y<0){
        printf("Third Quadrant");
    }
    else
       printf("Fourth Quadrant");
       return 0;

}

// month no. to month name:


#include <stdio.h>
int main(){
    int month;
    printf("Enter a month number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("Feburary");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Decmber");
            break;
        default:
            printf("ERROR !!!!Enter a valid month... ");
    }
    return 0 ;
}





