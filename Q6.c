//WAP a program to start a loop form 1 to 100 and ask the user upto which number the user wnat to print the value

#include <stdio.h>
int main()
{
    int i, x;
    printf("Upto which number you wnat to print the Vlaues: ");
    scanf("%d",&x);
    for (i = 1; i<=100; i++)
    {
        printf("%d\n", i);
        if (i==x)
        {
            break;
        }
        
    }
    return 0;
}