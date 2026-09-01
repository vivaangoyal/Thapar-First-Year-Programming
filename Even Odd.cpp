#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("The Number is even");
	}
	else{
		printf("The Number is odd");
	}
	return 0;
};