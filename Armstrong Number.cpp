#include <stdio.h>

int main(){
	int i,n,a;
	printf("Enter number to be checked:");
	scanf("%d", &n);
	int sum = 0;
	for(i=n;i!=0;i=i/10){
		a=i%10;
		sum = sum+(a*a*a);
		
	}
	if (sum==n){
		printf("%d is an armstrong number", n);
	}
	else{
		printf("It isnt an armstrong number");
	}

	return 0;
}