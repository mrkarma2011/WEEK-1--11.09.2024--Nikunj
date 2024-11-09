#include<stdio.h>
#include<math.h>
int main()
{
	float h,b,p;
	printf("enter the value of base and perpedicular:");
	scanf("%f%f", &b,&p);
	h = sqrt( b*b + p*p);
	printf("the value of hypotenuse is: %f", h);
	
	
	
	return 0;
}

