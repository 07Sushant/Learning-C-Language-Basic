#include <stdio.h>

int main()
{
    int i = 1, n=;
    for(i=1; i<5; i++)
    {
        if (i == 3)
        {
            goto there;
        }
        printf("%d\n",i);
        
    }
    there:
        printf("Two\n");

    printf("Printing The Two Table: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d\n\n", n);
    i = 1; 
    do
    {
        printf("%d * %d = %d\n", n,i,(n*i));
        i++;
    } while (i <= 10);
    return 0; 
}
