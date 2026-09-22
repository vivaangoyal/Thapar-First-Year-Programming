#include <stdio.h>

int main(){
	int i,n;
	int term;
	printf("Enter number of terms of fib series:");
	scanf("%d", &n);
	int a=0,b=1;
	printf("Fibonacci Series:");
	for (i=1;i<=n; i++){
		printf(" %d ", a);
		term = a+b;
		a=b;
		b=term;	
	}
	
	return 0;
}