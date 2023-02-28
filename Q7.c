//WAP a program to print any series and skip any two number using continue statement


#include <stdio.h>

int main() {
    int i, j, x, y;

    printf("Enter the First number you want to skip: ");
    scanf("%d", &x);

    printf("Enter the Second number you want to skip: ");
    scanf("%d", &y);

    for (i = 1; i < 3; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == x || j == y) {
                continue;
            }
            printf("%d\n", j);
        }
    }

    return 0;
}
