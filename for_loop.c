// printitng 1 to 10 in ascending using for loop
#include<stdio.h>
int main()
{   
    int i;
    int result;
    int input;

    printf("Enter the number: ");
    scanf("%d", &input);
    printf("\n");


    for (i = 1; i <= 10; i++)
    {
        result = i * input;
        printf("%d X %d = %d\n", i, input, result );
        printf("\n");


    }
        return 0;
}
