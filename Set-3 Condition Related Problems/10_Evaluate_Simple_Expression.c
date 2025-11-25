#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    printf("Enter: number1 operator number2 (e.g., 100 * 5.5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    if (op == '+') result = num1 + num2;
    else if (op == '-') result = num1 - num2;
    else if (op == '*') result = num1 * num2;
    else if (op == '/') {
        if (num2 != 0) result = num1 / num2;
        else { printf("Zero as divisor is not valid!\n"); return 0; }
    } else { printf("Invalid operator\n"); return 0; }

    printf("%lf\n", result);
    return 0;
}
