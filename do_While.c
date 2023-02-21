#include <stdio.h>
int main()
{
    int X, a;
    printf("Enter a number starting: \n");
    scanf("%d", &X);
    printf("Enter a number terminating: \n");    
    scanf("%d", &a);


    do
    {
        printf("%d\n", X);
        X = X+1;
    } while (X<=a);
    
    return 0;
}