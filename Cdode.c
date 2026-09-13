#include <stdio.h>
#include <stdlib.h> 

int main() {
    
    char *s = "3.145";
    
    double float_value = atof(s);

    int int_value = atoi(s);

    printf("Original String: %s\n", s);
    printf("Cast to Float/Double: %f\n", float_value);
    printf("Cast to Integer: %d\n", int_value);

    return 0;
}
