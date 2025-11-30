#include <stdio.h>

int main() {
    double a, b;
    int choice, subchoice;
    printf("Enter two numbers and a choice (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%lf %lf %d", &a, &b, &choice);

    if (choice == 4) {
        if (b == 0) {
            printf("Error Divisor is zero\n");
            return 0;
        }
        printf("Enter subchoice (1-Quotient, 2-Remainder): ");
        scanf("%d", &subchoice);
        if (subchoice == 1)
            printf("Quotient %.2lf\n", a / b);
        else
            printf("Remainder %d\n", ((int)a) % ((int)b));
    } else if (choice == 1)
        printf("Addition %.2lf\n", a + b);
    else if (choice == 2)
        printf("Subtraction %.2lf\n", a - b);
    else if (choice == 3)
        printf("Multiplication %.2lf\n", a * b);
    else
        printf("Invalid choice\n");
    return 0;
}
