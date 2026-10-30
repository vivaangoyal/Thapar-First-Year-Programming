#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "UNIVERSITY";
    int len = strlen(str);

    // Upper half of the pattern (Growing)
    for (int i = 2; i <= len; i += 2) {
        for (int j = 0; j < i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    // Lower half of the pattern (Shrinking)
    for (int i = len - 2; i >= 2; i -= 2) {
        for (int j = 0; j < i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
