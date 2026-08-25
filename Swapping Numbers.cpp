#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two Numbers:");
	scanf("%d %d",&a, &b);
	c=a;
	a=b;
	b=c;
	printf("Numbers after Interchange:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
	
}
