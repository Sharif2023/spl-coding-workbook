#include <stdio.h>
#include <stdbool.h>

int main() {
    double d;
    bool b;

    // First sample
    d = 3.14;
    b = true;
    printf("The double value: %e\n", d);
    printf("The boolean value: %d\n", b);

    // Second sample
    d = 1.618039;
    b = false;
    printf("The double value: %f\n", d);
    printf("The boolean value: %d\n", b);

    return 0;
}
