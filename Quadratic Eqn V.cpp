#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,alpha,beta;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	alpha=(-b+sqrt(d))/2*a;
	beta=(-b-sqrt(d))/2*a;
	if(d>=0)
	{
		printf("roots of the quadratic equation are:%f,%f",alpha,beta);
	}
	else
	{
		printf("no real roots exists");
	}
	return 0;
}