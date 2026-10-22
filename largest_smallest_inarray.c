#include <stdio.h>

int main() {
    float arr[50], largest, smallest;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Assume the first element is both largest and smallest
    largest = arr[0];
    smallest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %.2f\n", largest);
    printf("Smallest element = %.2f\n", smallest);

    return 0;
}
