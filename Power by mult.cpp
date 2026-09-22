#include <stdio.h>

int main(){
	int i=1,n,a,res=1;
	printf("Enter Base and Exponent:");
	scanf("%d",&n);
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	res	= res*n;
	}
	printf("%d raised to the power %d is equal to %d", n,a, res);
	return 0;
}