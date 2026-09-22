#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;

    printf("enter a number n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("the following number is neither a prime nor composite\n");
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;   
            }
        }

        if (isPrime == 1) {
            printf("the following number is prime\n");
        } else {
            printf("the following number is composite\n");
        }
    }

    return 0;
}
