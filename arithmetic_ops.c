#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);
	printf("the sum is:%d\n", a+b);
	printf("the difference is: %d\n", a-b);
	printf("the product is: %d\n", a*b);
	printf("the division is: %f", (float)(a/b));
	return 0;
}

