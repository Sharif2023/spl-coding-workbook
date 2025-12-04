// Print the odd series: 1, 3, ..., N terms
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        if(i!=0) printf(", ");
        printf("%d", 1 + 2*i);
    }
    return 0;
}
