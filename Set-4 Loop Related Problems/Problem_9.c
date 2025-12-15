// Grade calculation for N students
#include <stdio.h>
int main() {
    int n, att, asg, ct, mid, fin, total;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("Student %d (att, asg, ct, mid, fin): ", i);
        scanf("%d%d%d%d%d", &att, &asg, &ct, &mid, &fin);
        total = att+asg+ct+mid+fin;
        char grade = 'F';
        if(total >= 80) grade = 'A';
        else if(total >= 70) grade = 'B';
        else if(total >= 60) grade = 'C';
        else if(total >= 50) grade = 'D';
        printf("Grade: %c\n", grade);
    }
    return 0;
}
