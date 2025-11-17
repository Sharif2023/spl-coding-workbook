#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    double x;
    printf("Enter x (degrees): ");
    scanf("%lf", &x);
    x = x * PI / 180.0;  // degrees to radians
    double y = 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(x/2);
    printf("%lf\n", y);
    return 0;
}
