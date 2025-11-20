#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    int check = num > 0 && (num & (num - 1)) == 0;
    if (check)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
