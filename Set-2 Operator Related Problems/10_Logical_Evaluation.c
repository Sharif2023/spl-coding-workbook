#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a) %d\n", (a + b) <= 80);
    printf("b) %d\n", ! (a + c));
    printf("c) %d\n", a != 0);
    return 0;
}
