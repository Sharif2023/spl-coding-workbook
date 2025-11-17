#include <stdio.h>
#include <limits.h>

int main() {
    // Maximum values
    unsigned int ui_max = UINT_MAX;                // 4294967295
    unsigned long int uli_max = ULONG_MAX;         // 4294967295
    unsigned long long int ulli_max = ULLONG_MAX;  // 18446744073709551615
    unsigned short int usi_max = USHRT_MAX;        // 65535

    // Minimum values (0 for unsigned types)
    unsigned int ui_min = 0;
    unsigned long int uli_min = 0;
    unsigned long long int ulli_min = 0;
    unsigned short int usi_min = 0;

    // Print maximum values
    printf("The unsigned int value: %u\n", ui_max);
    printf("The unsigned long int value: %lu\n", uli_max);
    printf("The unsigned long long int value: %llu\n", ulli_max);
    printf("The unsigned short int value: %hu\n", usi_max);

    // Print minimum values
    printf("The unsigned int value: %u\n", ui_min);
    printf("The unsigned long int value: %lu\n", uli_min);
    printf("The unsigned long long int value: %llu\n", ulli_min);
    printf("The unsigned short int value: %hu\n", usi_min);

    return 0;
}
