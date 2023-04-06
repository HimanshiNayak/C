#include<stdio.h>
int main(){
    FILE *fp; //declaring file pointer
	//fopen ("file name ","mode");	
	fp = fopen("chaipeelo.txt","r");
//	if (fp!= NULL){
//		printf("Welcome\n");
//	}
//	else{
//		printf("Bye\n");
//	}
    //read data from file 
    char mystring[100];
    //fgets (buffer_name, buffer_size , file _pointer)
    //fgets  : to get string from the file  and store 
    fgets(mystring , 100 ,fp);
    
    //print the file content
    printf("%s",mystring);
    
    //close the file 
    fclose(fp);
    //size of the buffer will remain same 
    
	}

