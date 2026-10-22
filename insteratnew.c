#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[50], element;
    int n,i, position;

    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter elements");
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert:");
    scanf("%d",&element);
    printf("Enter position to be inserted at:");
    scanf("%d", &position);
    if(position<1 || position>n+1){
        printf("Invalid position");

    } else {
        for (i=n;i>=position; i--){
            arr[i] = arr[i-1];
        }
        arr[position-1] = element;
        n++;
    }
    

    printf("Array after insertion:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}