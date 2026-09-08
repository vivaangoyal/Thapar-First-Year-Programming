#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("capital letter: %c",ch);
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("small letter: %c",ch);
	}
	else if(ch>='0'&& ch<='9')
	{
		printf("numerical digit: %c",ch);
	}
	else
	{
		printf("special character: %c",ch);
	}
	return 0;
}
