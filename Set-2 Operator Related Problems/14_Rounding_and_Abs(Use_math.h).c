#include <stdio.h>
#include <math.h>
int main() {
    double x;
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("A = %.0f\n", ceil(x));
    printf("B = %.0f\n", floor(x));
    printf("C = %.1f\n", fabs(x));
    return 0;
}
