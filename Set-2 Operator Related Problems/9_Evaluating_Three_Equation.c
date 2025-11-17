#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int X = a - b/3 + c*2 - 1;
    int Y = a - (b/(3+c)*2) - 1;
    int Z = a - ((b/3) + c*2) - 1;
    printf("X = %d\nY = %d\nZ = %d\n", X, Y, Z);
    return 0;
}
