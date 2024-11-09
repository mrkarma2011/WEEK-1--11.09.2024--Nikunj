#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);
	a = a+b;
	b = a-b;
	a= a-b;
	printf("the swapped numbers are: %d %d",a,b );
	return 0;
}

