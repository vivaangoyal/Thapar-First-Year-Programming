#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d\n", a);
    printf("GCD = %d\n", a);

    return 0;
}

