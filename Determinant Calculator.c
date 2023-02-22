//DETERMINANT CALCULATOR

#include <stdio.h>
int main() {
    int matrix[3][3];  // create a 3x3 matrix
    printf("Enter matrix values:\n");
    printf("A: ");
    scanf("%d", &matrix[0][0]);
    printf("B: ");
    scanf("%d", &matrix[0][1]);
    printf("C: ");
    scanf("%d", &matrix[0][2]);
    printf("D: ");
    scanf("%d", &matrix[1][0]);
    printf("E: ");
    scanf("%d", &matrix[1][1]);
    printf("F: ");
    scanf("%d", &matrix[1][2]);
    printf("G: ");
    scanf("%d", &matrix[2][0]);
    printf("H: ");
    scanf("%d", &matrix[2][1]);
    printf("I: ");
    scanf("%d", &matrix[2][2]);

    // print out the matrix
    printf("\n");
    printf("The Given Matrix is:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // calculate and print the determinant
    int determinant = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))) 
                      - (matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))) 
                      + (matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0])));
    
    printf("\n");
    printf("The Determinant of Given Matrix is: %d\n", determinant);
    printf("\n");
    return 0;
}

// Inverse calculator,  Rank of matrix calculator
