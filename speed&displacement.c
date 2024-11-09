#include<stdio.h>
int main()
{
	float v,u,s,a,t;
	printf("enter inital velocity(m/s):");
	scanf("%f", &u);
	printf("enter acceleration(m/s^2): ");
	scanf("%f", &a);
	printf("enter time(s):");
	scanf("%f", &t);
	
	v = u + a*t;
	s = u*t + 0.5*a*t*t;
	printf("the displacement is:%f m\n", s);
	printf("the final velocity is: %f m/s", v);
	
	
	
	return 0;
}

