#include<stdio.h>
void sum(int i, int j, int k); //*function prototype*
int main()
{
	int a = 5;
	sum(3, 2*a, a); // actual arguements
	return 0;
}
 void sum(int i, int j, int k) // formal arguements
 {
 	int s;
 	s = i+ j + k;
 	printf("sum is %d", s);
 }
