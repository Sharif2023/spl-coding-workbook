// Print the series: 1, 0, 1, 0, ... N terms
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(i!=1) printf(", ");
        printf("%d", i%2);
    }
    return 0;
}
