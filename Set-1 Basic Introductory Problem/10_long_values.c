#include <stdio.h>

int main() {
    // Positive values
    long int li_pos = 2147483647;
    long long int lli_pos = 9223372036854775807LL;
    long double ld_pos = 1.1e4932L;   // using L for long double literal
    short int si_pos = 32767;

    // Negative values
    long int li_neg = -2147483648L;
    long long int lli_neg = -9223372036854775807LL - 1; // avoid overflow
    long double ld_neg = 3.4e-4932L;
    short int si_neg = -32768;

    // Print positive values
    printf("The long int value: %ld\n", li_pos);
    printf("The long long int value: %lld\n", lli_pos);
    printf("The long double value: %Le\n", ld_pos);
    printf("The short int value: %hd\n", si_pos);

    printf("**\n");

    // Print negative values
    printf("The long int value: %ld\n", li_neg);
    printf("The long long int value: %lld\n", lli_neg);
    printf("The long double value: %Le\n", ld_neg);
    printf("The short int value: %hd\n", si_neg);

    return 0;
}
