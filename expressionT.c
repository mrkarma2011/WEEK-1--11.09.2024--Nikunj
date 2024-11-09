#include<stdio.h>
#include<math.h>
int main()
{
	float t,a,b,c;
	printf("enter the 3 numbers:");
	scanf("%f%f%f", &a,&b,&c);
	t=2*a+ sqrt(b)+ 9*c ;
	printf("the value of t is: %f", t);
	return 0;
}

