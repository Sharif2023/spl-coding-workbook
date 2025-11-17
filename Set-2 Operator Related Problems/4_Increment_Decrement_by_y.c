#include <stdio.h>
int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    int a = x, b = x;
    a += y;
    b -= y;
    printf("Incremented Value: %d\n", a);
    printf("Decremented Value: %d\n", b);
    return 0;
}
