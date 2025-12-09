// Output until input is 'A'
#include <stdio.h>
int main() {
    char c;
    do {
        scanf(" %c", &c);
        printf("%c\n", c);
    } while(c != 'A');
    return 0;
}
