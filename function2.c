#include <stdio.h>

int adder(int a, int b);

int main()
{
    int x;
    int y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    int result = adder(x, y);
    printf("The sum is: %d", result);
    return 0;

}

    int adder(int a, int b)
    {
        return a+b;
    }