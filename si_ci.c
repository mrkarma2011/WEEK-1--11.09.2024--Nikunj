#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t, si, ci ;
	printf("enter principal sum (Rs): ");
	scanf("%f", &p);
	printf("enter rate of interest(p.a.): ");
	scanf("%f", &r);
	printf("enter time priod(in years): ");
	scanf("%f", &t);
	si= (p*r*t/100);
	printf("the simple interest is: %f Rs\n", si);
	ci = p*pow((1 +r/100),t) - p;
	printf("the compound interest is: %f Rs\n", ci);
	
	
	
	
	
	
	
	return 0;
}

