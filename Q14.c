// WAP to ask the user to enter any ten random number, sort threm in decreasing order

#include <stdio.h>

int main() {
    int nums[10], i, j, hold;

    // Asking  user to enter 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    // Sorting the numbers in descending order using bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9-i; j++) {
            if (nums[j] < nums[j+1]) {
                hold = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = hold;
            }
        }
    }

    // displaying the output to user
    printf("The numbers in descending order are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
