#include <stdio.h>
#include <math.h>

int main() {
    double PI = 3.14159265;
    double angle_deg, angle_rad;
    double log_val;
    double base, exponent;
    double sqrt_val;

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle_deg);
    angle_rad = angle_deg * (PI / 180.0);

    printf("Enter a number for natural log (ln): ");
    scanf("%lf", &log_val);

    printf("Enter base and exponent (separated by space): ");
    scanf("%lf %lf", &base, &exponent);

    printf("Enter a number to find its square root: ");
    scanf("%lf", &sqrt_val);

    printf("\n--- Results ---\n");
    printf("sin(%.2f) = %.4f\n", angle_deg, sin(angle_rad));
    printf("cos(%.2f) = %.4f\n", angle_deg, cos(angle_rad));
    printf("log(%.2f) = %.4f\n", log_val, log(log_val));
    printf("pow(%.2f, %.2f) = %.4f\n", base, exponent, pow(base, exponent));
    printf("sqrt(%.2f) = %.4f\n", sqrt_val, sqrt(sqrt_val));

    return 0;
}
