#include<stdio.h>
main()
{
	int i = 100,k;
	int * const ptr =&i;
	printf("%d\n",i);
	*ptr = 200;
	printf("%d",i);
}
