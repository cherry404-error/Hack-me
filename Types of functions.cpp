#include<stdio.h>
#include<conio.h>
void print(); //function declaration
main()
		{
			print(); //calling fucntion
			printf("no parameters and no return value");
			print(); //calling function
		}
	
void print(void) //function definitions
 		{
 			for(int i=1; i<=35; i++)
 				{
 					printf("*");
			 	}
		}		
