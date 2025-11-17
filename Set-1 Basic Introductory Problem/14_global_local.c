#include <stdio.h>

// Global variable
int num = 10;

// Function to print global num
void printGlobal() {
    printf("C. Global: %d\n", num);
}

int main() {
    // A. Print value before defining local variable
    printf("A. Global: %d\n", num);

    // Local variable with the same name
    int num = 20;

    // B. Print value of local variable
    printf("B. Local: %d\n", num);

    // C. Print global variable
    printGlobal();

    return 0;
}
