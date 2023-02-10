// distance between two points:
// // (x1,y1) , (x2,y2)
// // distance = sqrt(x**2 +y**2)


#include <stdio.h>
#include <math.h>
// to multiply two unknowns also we have math func
int main(){
   float x1,x2,y1,y2;
   float distance;
    printf("enter the value of x1: \n");
    scanf("%f",&x1);
    printf("enter the value of x2: \n");
    scanf("%f",&x2);
    printf("enter the value of y1: \n");
    scanf("%f",&y1);
    printf("enter the value of y2: \n");
    scanf("%f",&y2);
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("the distance between the points(%.2f,%.2f) and (%.2f,%.2f) is:%.2f " , x1 , y1 , x2, y2 , distance);
    return 0;
}



#include <stdio.h>
#include<math.h>
int main(){

    int x ;
    int x2,x4,x6,x8;
    printf("enter a number: ");
    scanf("%d",&x);
    x2 = x*x;
    x4 = x2*x2;
    x6 = x4*x2;
    x8 = x4*x4;
    printf("x^2 = %d\nx^4 = %d\nx^6 = %d\nx^8 = %d",x2,x4,x6,x8);
    return 0;


}
