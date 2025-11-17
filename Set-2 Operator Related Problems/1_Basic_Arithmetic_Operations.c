#include <stdio.h>
int main() {
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Addition: %.2f\n", x+y);
    printf("Subtraction: %.2f\n", x-y);
    printf("Multiplication: %.2f\n", x*y);
    printf("Quotient: %.0f\n", x/y);
    printf("Reminder: %.0f\n", (int)x % (int)y);
    return 0;
}
