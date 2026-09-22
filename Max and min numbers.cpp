#include <stdio.h>

int main() {
    int count, num, max, min;
    printf("Enter the total number of elements: ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Please enter a valid count greater than 0.");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for (int i = 2; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("\nMaximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
