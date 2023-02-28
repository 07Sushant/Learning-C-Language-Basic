// #include <stdio.h>
// int main()
// {
//     int i, j;
//     printf("Display right triangle for 5 rows\n");
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }




#include <stdio.h>
int main()
{
    int i, j, x;
    printf("Enter the number to print the star pattern upto desire value: \n\n");
    scanf("%d", &x);
    printf("\n");
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}