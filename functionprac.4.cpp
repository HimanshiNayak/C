//odd even
#include <stdio.h>
void evenodd(int a){
	if (a%2 == 0){
		printf("%d is even.",a);
	}
	else 
	    printf("%d is odd.",a);
}
int main(){
	int a ;
	printf("Enter a number: ");
	scanf("%d",&a);
	evenodd(a);
	return 0;
}

// isodd(gives 1 when odd otherwise 0) 
//#include <stdio.h>
//int isodd(int a){
//	if (a%2 != 0){
//		return 1;
//	}
//	else 
//	    return 0;
//}
//int main(){
//	int a ;
//	int result;
//	printf("Enter a number: ");
//	scanf("%d",&a);
//	result = isodd(a);
//	printf("%d",result);
//	return 0;
//}
// iseven(gives 1 when even otherwise 0) 
//#include <stdio.h>
//int iseven(int a){
//	if (a%2 == 0){
//		return 1;
//	}
//	else 
//	    return 0;
//}
//int main(){
//	int a ;
//	int result;
//	printf("Enter a number: ");
//	scanf("%d",&a);
//	result = iseven(a);
//	printf("%d",result);
//	return 0;
//}
