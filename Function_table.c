//  Function to print tabele 
// Asking user to print the desire number and returning it with multiplicatioon table 

    // #include <stdio.h>
    // void tablefunction(int input)
    // {
    //     int i;
    //     int result;
    //     for ( i = 1; i <= 10; i++)
    //     {
    //         result = i *  input;
    //         printf("%d X %d = %d\n", i, input, result);

    //     }
    // }

    // int main()
    // {
    //     int input;
    //     printf("Enter the number: \n");
    //     scanf("%d", &input);
    //     printf("\n");

    //     //  cllin the function
    //     tablefunction(input);
         
    //     return 0;
    // }


// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

#include<stdio.h>
void tablefunction(int input)
{
    int i;
    int result;
    for (i = 1; i <= 10; i++)
    {
        result = i * input;
        printf("%d X %d = %d\n", i, input, result);

    }
}

int main()
{
    int input;
    printf("Enter the number: \n");
    scanf("%d", &input);
    printf("\n");

    // Callin the function

    tablefunction(input);
    return 0;
}
    

