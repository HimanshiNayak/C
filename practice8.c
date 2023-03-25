//  switch cases
// when the if else becomes messy then we use switch cases


//GRADING SYSTEM
#include <stdio.h>
int main(){
    char grade ; //not an int
    printf("Enter grade (A-F): ");
    scanf("%c",&grade);
    switch(grade) //specifying variable
    {
        case 'A': 
           printf("Grade is between 90-100\n");
           break;
        case 'B':
           printf("Grade between 80-89\n");
           break;
        case 'c':
            printf("Grade between 70-79");
            break;
        case 'D':
            printf("Grade is between 60-69\n");
            break;
        default:  //when nothing matches
            printf("error!!");
            break;
    }
    return 0;
    }
