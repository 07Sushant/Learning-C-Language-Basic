// Multipilication Table using While Loop
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d\n\n", n);
    while (i <= 10){
        printf("%d * %d = %d\n", n,i,(n*i));
        i++;
    }

    return 0;
}
