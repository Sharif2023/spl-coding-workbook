// Reverse the digits of input number
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("Reversed: ");
    while(n != 0){
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}
