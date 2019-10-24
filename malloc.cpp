#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number, *ptr, i;
	printf("how many ints would you like to store");
	scanf("%d",&number);
	ptr = (int *)malloc(number*sizeof(int));
	for(i=0 ; i<=number ; i++){
		*(ptr+i)=i;
	}
	for(i=0;i<=number;i++){
		printf("%d\n",*(ptr+i));
	}
}
