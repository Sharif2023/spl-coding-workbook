#include <stdio.h>

int main() {
    double a, b, result;
    int choice;
    printf("Enter two numbers and a choice (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%lf %lf %d", &a, &b, &choice);

    switch (choice) {
        case 1: result = a + b; printf("Addition %.2lf\n", result); break;
        case 2: result = a - b; printf("Subtraction %.2lf\n", result); break;
        case 3: result = a * b; printf("Multiplication %.2lf\n", result); break;
        case 4: 
            if (b != 0) printf("Quotient %.2lf\n", a/b);
            else printf("Zero as divisor is not valid!\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
