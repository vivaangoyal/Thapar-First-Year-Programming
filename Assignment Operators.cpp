#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	a=5;
	b=6;
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