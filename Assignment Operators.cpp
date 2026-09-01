#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("Enter Number 1:");
	printf("Enter Number 2:");
	scanf("%d %d", &a,&b);
	a+=b;
	printf("a1:%d",a);
	a*=b;
	printf("\na2:%d",a);
	a-=b;
	printf("\na3:%d",a);
	a/=b;
	printf("\na4:%d",a);
	a%=b;
	printf("\na5:%d",a);
	return 0;
}