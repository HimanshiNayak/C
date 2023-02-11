// either //
/*for multy line*/

// format 
#include<stdio.h>
int main(){
    printf("i am %d years old.",18);
    printf("MY current age is %dyears and this year only I'll be truning %d.\n" ,18 ,19);
    //  " ke badd jo phle woh phle % d mein
    printf("my average grade is %f\n" , 96.2);
    //for floats ... if we write( %.1f) ie only one digit after decimal
     printf("my average grade is %.1f\n" , 96.2);
    //  %c is for char
    // printf("my name is %c\n",ch);
    }

#include <stdio.h>
int main(){
    printf("year = %d\n",2022);
    printf("num= %d\n", 5+6);
    // will print 11
    printf("num= %f\n", 5.1+6.0);
    printf("num= %d\n", 5+6);
    printf("num= %d\n", 5+6);
    printf("num= %d\n", 5-6);
    printf("sum = a+b = %d\n" , 3+5);
    printf("sum = %d+%d = %d\n",3,5,3+5);
    printf("sum = a+b=%d+%d = %d\n",3,5,3+5);
    return 0;
}


#include <stdio.h>
int main(){
    printf("sum of 2 and 5 is , sum = %d\n",2+5);
    printf("diff of 2 and 5 is ,subtraction  = %d\n",2-5);
    printf("product of 2 and 5 is ,multiplication = %d\n",2*5);
    printf("division of 2 and 5 is ,division = %d\n",2/5);    
    printf("remainder of 2 and 5 is ,remainder  = %d\n",2%5);
    printf("%d + %d = %d \n", 5, 2, 5 + 2);

	printf("%d - %d = %d \n", 5, 2, 5 - 2);

	printf("%d * %d = %d \n", 5, 2, 5 * 2);

	printf("%d / %d = %d \n", 5, 2, 5 / 2); // We take just the FULL part of the division

	printf("%d %% %d = %d \n", 5, 2, 5 % 2); // Taking the remainder. Think about what would happen if you used just one "%".
//   printf("%d % %d = %d \n", 5, 2, 5 % 2); not even getting printed
	printf("Hey // Alpha Tech\n");
    //not counted as commhents
	return 0;
    
    }

// take a sentence as input:
// scanf("%[^\n]%*c];
//       printf("%s",s)
