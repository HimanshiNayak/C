//declaring an array :
//typename[size] = { elements };

//int arr1[2] = {1,2};
//float arr2[3] = {1.2 , 3.4 ,5.6};
//char arr3[5] = {'A','Y','U','S','H'};

//if all elements are 0 then 
//int zero[0] = {0}

//int hey[8] = {1,2,4,5}
//here the rest become zero themselves

//element accesssing

//first is index 0 , last is index size-1

//access array: float arr2[2];
// modify : float arr[2]= 9;
//printing :
//printf("%f", arr[elements index no.)

//lowest grade :

#include <stdio.h>
int main(){
	int grades[5];
	int i ;
	int lowest_grade;
	for (i=0 ; i<5;i++){
		printf("Enter grade no.%d :\n",i+1);
		scanf("%d",&grades[i]);
	}
	lowest_grade = grades[0];
	for (i =1;i<5;i++){
		if (grades[i] < lowest_grade)
		    lowest_grade = grades[i];
	}
	printf("Your lowest grade is %d \n", lowest_grade);
	//to print all the elements 
	for(i=0 ; i<5 ; i++){
		printf("grades[%d] = %d",i,grades[i]);
	}
	//to print it in reverse 
	//for(i =len-1 ; i>0;i--)
	return 0 ;	
}
//the adresses of the array elements jump by 4 after each for int as the size of the int is4



