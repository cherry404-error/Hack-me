#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter elements of first array:");
	for (i=0;i<3;i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of second array:");
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("sum of two arrays:\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("%d \t",c[i][j]);
	}
	}
	printf("\n");
}
