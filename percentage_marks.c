#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	printf("enter marks of all subjects: ");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5 );
	float p = 	(m1+m2+m3+m4+m5)/5;
	printf("the percentage is: %f %%", p);
	return 0;
}

