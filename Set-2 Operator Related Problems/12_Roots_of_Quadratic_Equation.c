#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, disc, root1, root2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc < 0)
        printf("Imaginary\n");
    else {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("%.2f %.2f\n", root1, root2);
    }
    return 0;
}
