#include <stdio.h>

int main(){
	char ch;
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Enter operator:");
	scanf(" %c",&ch);
	int n;
	switch(ch){
		case '+': n=a+b;
		break;
		case '-': n=a-b;
		break;
		case '*': n=a*b;
		break;
		case '/': n=a/b;
		break;
		default:printf("Invalid Input");
	}
	printf("%d", n);
	return 0;
}