#include <stdio.h>

int main() {

    // a) Declare a variable uninitialized
    int a;

    // b) Declare and initialize a variable in one statement
    int b = 10;

    // c) Declare and initialize multiple variables with different values in one statement
    int x = 5, y = 15, z = 25;

    // d) Declare and initialize multiple variables with the same value in one statement
    int p = 100, q = 100, r = 100;

    // Optional: print them to verify
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %d, q = %d, r = %d\n", p, q, r);

    return 0;
}
