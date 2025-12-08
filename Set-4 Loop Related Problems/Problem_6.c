// Guessing game with N tries
#include <stdio.h>
int main() {
    int secret, guess, n, success=0;
    printf("Player 1, enter the secret: ");
    scanf("%d", &secret);
    printf("Player 2, how many tries? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter guess #%d: ", i);
        scanf("%d", &guess);
        if (guess == secret) {
            printf("Player 2 wins!\n");
            success = 1;
            break;
        }
    }
    if(!success) printf("Player 1 wins!\n");
    return 0;
}
