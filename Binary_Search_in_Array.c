#include<stdio.h>

int main()
{
    int a[50], n, loc = -1, key, beg, last, mid, i;

    printf("\nEnter number of array elements:");
    scanf("%d", &n);
    printf("\nEnter array elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    beg = 0;
    last = n - 1;

    printf("\nEnter integer value to search in sorted array:");
    scanf("%d", &key);

    while(beg <= last)
    {
        mid = (beg + last) / 2;

        if(a[mid] == key)
        {
            loc = mid;
            break;
        }
        else if(key < a[mid])
        {
            last = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    if(loc == -1)
    {
        printf("\nElement not found.");
    }
    else
    {
        printf("\nElement found at index %d.", loc);
    }

    return 0;
}
