// find the nth term of the AP having : first term = 1 , common difference = 2,
// n = 9 , a_9 = ?

// #include <stdio.h>
// int main(){
//     int a = 1;
//     int d = 2;
//     int n = 9;
//     int a_9 ;
//     a_9 = a +(n-1)*d;
//     printf("the ninth term of the ap is: %d",a_9);
//     return 0;
// }

// sum of the sequence;

// #include <stdio.h>
// int main(){
//     int a = 1;
//     int d = 2;
//     int n = 9; 
//     int a_9 = 17;
//     int sum ;
//     sum = (a +a_9)*n/2;
//     printf("the sum of the ap is:%d",sum );
//     return 0;

// }

// Calculate the  monthly salary (in terms of the hours worked and salary per hour):-

// #include <stdio.h>

// int main(){
//     float salaryperhour ;
//     int totalhours;
//     float salary;
//     printf("enter your per hour salary: ");
//     scanf("%f",&salaryperhour);
//     printf("enter the no. of hours you worked this month: ");
//     scanf("%d",&totalhours);
//     salary = salaryperhour*totalhours;
//     printf("Enter your salary per hour:%f",salary);
//     return 0 ;
// }


// driving time:

// #include <stdio.h>
// int main(){
//     float speed;
//     float distance;
//     float time ;
//     printf("Enter the speed of your vehicle in kmph: ");
//     scanf("%f",&speed );
//     printf("The distance between the two cities is(in km): ");
//     scanf("%f",&distance);
//     time = speed*distance;
//     printf("The time it will take to reach from city one to two is: %.2f",time);
//     return 0;
// }

// convert seconds to hours and min and give the remaining seconds:

#include <stdio.h>
int main(){
    int seconds;
    int hours;
    int minutes;
    int remainingseconds;
    printf("Enter the seconds you want to convert: ");
    scanf("%d",&seconds);
    hours = seconds/3600;
    minutes = (seconds - hours*3600)/60 ;
    remainingseconds = (seconds -hours*3600)% 60;
    printf("the hours");
    printf("hours:%d\n",hours);
    printf("minutes:%d\n",minutes);
    printf("remaining seconds:%d\n",remainingseconds);
    return 0;
}
// Having the following code, the user inserts "7 9" and then presses Enter. What would be the result of running this code?

// #include <stdio.h>

// void main() {

// int num1 = 1, num2 = 2;

// scanf("%d%d", &num1, &num2);

// printf("%d%d", num2, num1);

// } the answer will be 97 

