#include <stdio.h>

int main() {
    int bookID;
    int daysLate;
    float fine = 0.0;

    
    printf("Enter no of books: ");
    scanf("%d", &bookID);
    
    printf("Enter Days Overdue: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        fine = 0.0;
    } else if (daysLate <= 6) {
        fine = daysLate * 0.50 * bookID;
    } else if (daysLate <= 10) {
        fine = daysLate * 1.0 * bookID;
    } else if (daysLate <=30){
	
        fine = daysLate * 5.0 * bookID;
    }
    else {
    	printf("your membership has been cancelled");
    	fine = daysLate * 10.0 * bookID;
	}
    
    printf("Book ID      : %d\n", bookID);
    printf("Days Late    : %d\n", daysLate);
    printf("Total Fine   : Rs. %.2f\n", fine);

    return 0;
}
