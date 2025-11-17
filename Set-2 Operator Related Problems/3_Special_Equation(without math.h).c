#include <stdio.h>
int main() {
    float a, b, x;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);
    float a2 = a*a, b2 = b*b, b3 = b*b*b, a3 = a*a*a;
    x = (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3);
    printf("X = %f\n", x);
    return 0;
}
