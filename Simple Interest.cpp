#include <stdio.h>

int main(){
	float p,r,t,SI;
	printf("Enter Principal Amount:");
	scanf("%f",&p);
	
	printf("Enter rate of Interest:");
	scanf("%f",&r);
	
	printf("Enter Interest time:");
	scanf("%f",&t);
	
	SI = ((p*r*t)/100);
	printf("Simple Interest = %f\n", SI);
	
	
	return 0;
}
