#include <stdio.h>
#include <math.h>  // for round() if needed

int main() {
    double num;

    // Input a floating-point number
    printf("Enter a number: ");
    scanf("%lf", &num);

    // (a) Right justified within 10 columns
    printf("(a) Val:%10f\n", num);

    // (b) Right justified to 2 columns (but number has more than 2 digits)
    // 2 columns is too small, so number will overflow, but we follow sample
    printf("(b) Val:%2f\n", num);

    // (c) Rounded to 2 decimal places
    printf("(c) Val:%.2f\n", num);

    // (d) Rounded to integer (without type casting)
    printf("(d) Val:%.0f\n", num);

    // (e) Exponential / scientific notation
    printf("(e) Val: %e\n", num);

    return 0;
}
