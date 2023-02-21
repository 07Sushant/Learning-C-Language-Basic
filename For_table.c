// Multipilication Table using do for Loop
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d\n\n", n);
    for (n; i <= 10; i++)
    {
         printf("%d * %d = %d\n", n,i,(n*i));
    }
    return 0;
}

