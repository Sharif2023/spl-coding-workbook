// Print squares from X toward Y
#include <stdio.h>
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    while(1) {
        printf("%d^2 = %d\n", x, x*x);
        if(x == y) {
            printf("Reached!\n");
            break;
        }
        if(x < y) x++;
        else x--;
    }
    return 0;
}
