// Multipilication Table using do While Loop
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d\n\n", n);
    do
    {
        printf("%d * %d = %d\n", n,i,(n*i));
        i++;
    } while (i <= 10);
    return 0;

        
    }