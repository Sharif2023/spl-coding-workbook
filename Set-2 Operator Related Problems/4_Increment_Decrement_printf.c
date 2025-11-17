#include <stdio.h>
int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("X++ : %d\n", x++);
    printf("++X : %d\n", ++x);
    printf("X-- : %d\n", x--);
    printf("--X : %d\n", --x);
    return 0;
}
