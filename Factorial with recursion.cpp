#include<stdio.h>
int rec(int);
main()
{
	int a, fact;
	printf("Enter any number:");
	scanf("%d", &a);
	fact= rec(a);
	printf("Factorial Value : %d\n", fact);
}
 
 int rec(int x)
 {
 	int f;
 	if(x==1)
 		return(1);
 	else
 		f=x*rec(x-1);
 	return(f);
 		
 }
