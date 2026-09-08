#include <stdio.h>

int main(){
	int a,b;
	printf("Enter Number 1: ");
	scanf("%d", &a);
	printf("Enter Number 2: ");
	scanf("%d", &b);
	float result;
	result = (float)a/b;
	printf("result: %.2f\n",result);
	return 0;
}
