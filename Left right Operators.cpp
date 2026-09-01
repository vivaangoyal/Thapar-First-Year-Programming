#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("value after left shift:%d",a<<2);
	printf("\nvalue after right shift:%d",a>>2);
	return 0;
}