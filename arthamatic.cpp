#include<stdio.h>
main()
{
	int a,b,add,mul,div,re,sub;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	add=a+b;
	mul=a*b;
	sub=a-b;
	div=a/b;
	re=a%b;
	printf("add:%d\n",add);
	printf("mul:%d\n",mul);
	printf("sub:%d\n",sub);
	printf("div:%d\n",div);
	printf("re:%d\n",re);
}
