#include <stdio.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";
    int i = 0, j = 0;

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append characters of the second string to the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Add null terminator

    printf("Concatenated String: %s\n", str1);
    return 0;
}
