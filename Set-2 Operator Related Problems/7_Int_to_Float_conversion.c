#include <stdio.h>
int main() {
    int a;
    float b;
    printf("Enter integer and float: ");
    scanf("%d %f", &a, &b);
    int x = b; float y = a;
    printf("Assignment: %f assigned to int produces %d\n", b, x);
    printf("Assignment: %d assigned to float produces %f\n", a, y);
    printf("Type Casting: (float) %d produces %f\n", a, (float)a);
    printf("Type Casting: (int) %f produces %d\n", b, (int)b);
    return 0;
}
