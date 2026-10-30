int main(int argc, char const *argv[])
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "University";
    char destination1[50];
    char destination2[50];
    int i = 0;

    // A. With using string handling function
    strcpy(destination1, source);
    printf("Copied string (with strcpy): %s\n", destination1);

    // B. Without using string handling function
    while (source[i] != '\0') {
        destination2[i] = source[i];
        i++;
    }
    destination2[i] = '\0'; // Crucial: Add the null terminator at the end
    
    printf("Copied string (without library function): %s\n", destination2);

    return 0;
}
