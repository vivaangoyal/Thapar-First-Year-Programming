#include <stdio.h>
#include <math.h>

int main(){
	float principal, rate,time,amount,Comp_Int;
	printf("enter principal amount:");
	scanf("%f",&principal);
	
	printf("enter rate of interest:");
	scanf("%f",&rate);
	
	printf("Enter time:");
	scanf("%f",&time);
	amount = principal*pow((1+rate/100),time);
	Comp_Int = amount - principal;
	printf("compound Interest=%.2f\n",Comp_Int);

	return 0;
	
}
