#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    // Taking input separately (like your sample input)
    scanf("%d", &i);
    scanf("%f", &f);
    scanf(" %c", &c);  // Notice the space before %c to ignore newline

    printf("The integer value: %d\n", i);
    printf("The floating point value: %f\n", f);
    printf("The character value: %c\n", c);

    return 0;
}
