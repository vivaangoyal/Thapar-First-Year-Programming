#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max_ifelse, max_ternary;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        max_ifelse = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max_ifelse = num2;
    } else {
        max_ifelse = num3;
    }

    max_ternary = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("\n--- Result ---\n");
    printf("Greatest number (using if-else): %d\n", max_ifelse);
    printf("Greatest number (using ternary): %d\n", max_ternary);

    return 0;
}
