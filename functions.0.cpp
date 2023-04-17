// block of code that performs aparticular task
//takes parameters -> Do work -> return result
// function prototype : void funcname(); 
//bcz of void , it won't return anything but will print what we give

//function definition:
//void printhello(){
// printf("Hello");
//}

//function call:
// int main(){
//    printhello();
//    return 0;
//}

//# include <stdio.h>
//void hello();
//int main(){
//	hello();
//	hello();
//	return 0;	
//}
//
//void hello(){
//	printf("Hello\n");
//}


/// 1. make two functions to say hello and bye together 
#include <stdio.h>
void hello();
void bye();
int main(){
   hello();
   bye();
   hello();
   bye();
   return 0;	
}

void hello(){
	printf("Hello\n");
}
void bye (){
	printf("Bye :)\n");
}


// 2. make a function which says namaste for indians and annyeong for korean

#include<stdio.h>
void namaste();
void anneyong();

int main(){
	char x;
	printf("Enter i for indian and k for korean: ");
	scanf("%c",&x);
	if (x=='i'){
		namaste();
	}
	else{
		anneyong();
	}
	return 0;
}
void namaste(){
	printf("namaste\n");
}
void anneyong(){
	printf("anneyong\n");
}

//print hi if h and bye if b;

#include <stdio.h>
void hi();
void bye();

int main(){
	char n ;
	printf("Enter h if you are starting and b if you are ending the function: ");
	scanf("%c",&n);
	if (n =='h'){
		hi();
	}
	else{
		bye();
	}
	return 0;
}

void hi(){
	printf("hi");
}
void bye(){
	printf("Bye");
}

