#include <stdio.h>

int main() {
    char ch;
    printf("give value to check:");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("Uppercase\n");
    } 
    else if (ch >= 97 && ch <= 122) {
        printf("Lowercase\n");
    } 
    else if (ch >= 48 && ch <= 57) {
        printf("Digit\n");
    } 
    else {
        printf("Special Character\n");
    }

    return 0;
}

