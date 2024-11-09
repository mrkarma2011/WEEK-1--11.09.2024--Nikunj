#include<stdio.h>
int main()
{
	int d;
	float y;
	printf("enter number of days:");
	scanf("%d",&d );
	y= d/365;  //assume each year to have 365 days
    printf("years: %f", y);

	return 0;
}

