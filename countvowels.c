#include <stdio.h>

int main() {
    char str[] = "Programming in C Language";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check for both lowercase and uppercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("The number of vowels in the string is: %d\n", count);
    return 0;
}
