#include <stdio.h>

int main() {
    int target, guess1, guess2, guess3;
    int win = 0;
    printf("Player-1, enter number: ");
    scanf("%d", &target);
    printf("Player-2, guess 1: ");
    scanf("%d", &guess1);
    if (guess1 == target) {
        printf("Right, Player-2 wins!\n");
        win = 1;
    } else {
        printf("Wrong, 2 Chances Left!\n");
        printf("Player-2, guess 2: ");
        scanf("%d", &guess2);
        if (guess2 == target) {
            printf("Right, Player-2 wins!\n");
            win = 1;
        } else {
            printf("Wrong, 1 Chance Left!\n");
            printf("Player-2, guess 3: ");
            scanf("%d", &guess3);
            if (guess3 == target) {
                printf("Right, Player-2 wins!\n");
                win = 1;
            } else {
                printf("Wrong, 0 Chances Left!\nPlayer-1 wins!\n");
            }
        }
    }
    return 0;
}
