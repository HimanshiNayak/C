//to find the max ele of an array :

//#include<stdio.h>
//int main(){
//	int num[7];
//	int i ;
//	int greatest_num;
//	for (i= 0 ; i<7;i++){
//	    printf("Enter a digit of your phone no.: ");
//	    scanf("%d",&num[i]);
//}
//    greatest_num = num[0];
//    for (i=1 ; i<7 ; i++){
//    	if (num[i]> greatest_num){
//    		greatest_num = num[i];
//		}
//	}
//	printf("The greatest digit in your phone no. is :%d",greatest_num);
//	return 0 ;
//
//}

////finding max index in an array:
//
#include<stdio.h>
int main(){
	int arr[10];
	int i , max_index;
	for (i = 0;i<10 ;i++){
		printf("Enter digit %d of your phone no.:\n",i+1);
		scanf("%d",&arr[i]);
	}
	max_index = 0 ;
	for (i = 1;i<10;i++ ) {
	     if (arr[i] > arr[max_index]){
	     	max_index = i;
		 }
	}
	printf("the index of the max digit is : %d", max_index);
	return 0 ;
}


