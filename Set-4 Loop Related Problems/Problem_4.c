// Average of N numbers (no array)
#include <stdio.h>
int main() {
    int n;
    double x, sum=0.0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%lf", &x);
        sum += x;
    }
    printf("AVG of %d inputs %.6f\n", n, sum/n);
    return 0;
}
