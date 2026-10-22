#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[50],n,i,arr2[50];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i = 0;i<n;i++){
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("New array copied:");
    for (i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}