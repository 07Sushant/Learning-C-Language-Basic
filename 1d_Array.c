#include <stdio.h>
int main()
{
    int i, n;
    int a[10], *psrr = a;
    printf("\n Enter the number of elementd: ");
    scanf("%d", &n);
    printf("\n ENter the number: ");
    for( i = 0; i<n; i++)
    {
            scanf("%d", parr+i);

    }

    printf("\n Enter array elements are: ");
    for (i = 0; i<n; i++)
    {
            printf("\t %d", (parr+i));
    }

    return 0;
}