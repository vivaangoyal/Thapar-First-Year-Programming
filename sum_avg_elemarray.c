#include <stdio.h>

int main() {
    float arr[50], sum = 0, avg;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; // Add directly during input loop
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
