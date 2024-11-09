#include<stdio.h>
int main()
{
	float horlicks, radius,distance,circumference;
	
	printf("enter amount of horlicks(in gm) ");
	scanf("%f", &horlicks);
	printf("enter radius of circle: ");
	scanf("%f", &radius);
	distance = 100*horlicks;
	circumference= 3.14159*radius*2;
	int toffee= distance/circumference;
	printf("number of toffees: %d",toffee);
	
	
	return 0;
}

