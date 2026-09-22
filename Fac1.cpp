#include <stdio.h>

int main(){
	int i, n;
	double fact = 1;
	
	printf("Enter number to calculate Factorial: ");
	scanf("%d", &n);
	
	for (i = n; i >= 1; i--){
		fact = fact * i;
	}
	
	printf("%.0f\n", fact);
	
	return 0;
}
