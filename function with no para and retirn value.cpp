#include<stdio.h>
#include<conio.h>
void sum(int,int); //fucntion declaration

	main()
	{
		int a,b;
		printf("Enter two numbers:");
		scanf("%d %d", &a, &b);
		sum(a,b);
	}

	void sum(int x, int y)
	{
		int z ;
		z = x + y;
		printf("Sum is: %d", z);
	}
