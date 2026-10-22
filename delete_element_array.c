#include <stdio.h>

int main() {
    float arr[50], element;
    int n, i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%f", &element);

    // Search for the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("Element not found in the array.\n");
    } else {
        // Shift elements to the left
        for(i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for(i = 0; i < n; i++) {
            printf("%.2f ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
