#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n;
	float *x;
	printf("how many elements do you want?");
	scanf("%d",&n);
	x=(float*)calloc(n,sizeof(float));
	if(x!=NULL)
	{
		printf("*data is=\n");
		for (i=0;i<n;i++)
		printf("\n x[%d]=%d ",i,*(x+i));
	}
	else
	printf("calloc failed");
}
