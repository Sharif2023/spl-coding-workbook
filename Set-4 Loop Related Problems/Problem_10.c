// Alternating sum: 1, -2, 3, -4...
#include <stdio.h>
int main() {
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += (i%2 ? i : -i);
    }
    printf("Sum: %d\n", sum);
    return 0;
}
