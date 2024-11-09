#include<stdio.h>
int main()
{
	float a,b;
	printf("enter 2 float numbers: ");
	scanf("%f%f", &a, &b);
	printf("the product in float is: %f\n", a*b);
	printf("the product in integer is: %d", (int)(a*b));
	return 0;
}

