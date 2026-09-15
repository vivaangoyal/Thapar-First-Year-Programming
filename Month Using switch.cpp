#include<stdio.h>
int main()
{
	//QUESTION 2-Display month name according to the month number using switch statement
	int month_number;
	printf("Enter month number:");
	scanf("%d",&month_number);
	
	switch(month_number)
	{
		case 1:
			printf("January\n");
			break;
		case 2:	
	   printf("February\n");
	   break;
	    case 3:
	    printf("March\n");
	    break;
	    case 4:
	    printf("April\n");
	    break;
		case 5:
		printf("May\n");
		break;
		case 6:
		printf("June\n");
		break;
		case 7:
		break;	
		printf("July\n");
		case 8:
		printf("August\n");
		break;
		case 9:
		printf("September\n");
		break;
		case 10:
		printf("October\n");
		break;
		case 11:
		printf("November\n");
		break;
		case 12:
		printf("December\n");
		break;
		default:
		printf("Entered value doesn\'t corresponds to any month");
		
	}
}