#include<stdio.h>
int main()
{
	float k;
	printf("enter distance in km: ");
	scanf("%f", &k);
	printf("distance in meter is: %f m\n", 1000*k);
	printf("distance in centimeter is: %f cm\n", 1000000*k);
	printf("distance in millimeter is: %f mm\n", 1000000000*k);
	
	return 0;
}

