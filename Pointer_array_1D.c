#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int *p = a;


    int *p = &a[0];

    // Now we can access the element of given charater array via pointer, such as; 

    int i;
    for(i = 0; i < 5; i++)
    {
        printf("\n %d", *(p+i));

    }

    return 0;
}