#include<stdio.h>
int main()
{
	 float m,h,v,g=9.8;
	 	printf("enter mass (in kg):");
	 	scanf("%f", &m);
	 	printf("enter velocity(inm/s): ");
	 	scanf("%f", &v);
	 	printf("enter height (in m):");
	 	scanf("%f", &h);
	 	 printf("Total mechanical energy is: %f Joules\n", (m*g*h + 0.5*m*v*v));
	 	 printf("Kinetic energy: %f Joules\n",0.5*m*v*v );
	 	 printf("Potential energy is: %f Joules", m*g*h);
	 	
	return 0;
}

