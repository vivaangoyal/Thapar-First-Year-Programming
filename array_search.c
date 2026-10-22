#include <stdio.h>

int main() {
    float arr[50], element;
    int n, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%f", &element);

    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("Element found at Position %d (Index %d).\n", i + 1, i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
