#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int i;
    int *p;
    p = arr;
    printf("\n First Value is: %d", *p);
    p = p+1;
    printf("\n Second Value is: %d", *p);
    *p = 45;
    p = p + 2;
    *p = - 2;
    printf("\n Modified array is: ");
    for( i = 0; i<5; i++)
    {
        printf("\n%d", arr[i]);
    }

    p = arr;
    *(p+1) = 0;
    *(p-1) = 1;
    printf("\n Modified array is: ");
    for( i =0; i<5; i++)
    {
        printf("\n%d", arr[i]);
    }
    
    return 0;
}
