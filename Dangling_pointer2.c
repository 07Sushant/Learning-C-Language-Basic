#include <stdio.h>
int main()
{
    int *ptr;
    {
        int val = 23;
        ptr = &val;
        printf("\n%d", *ptr);    // 23 is printed
        printf("\n %n%u", ptr);  // Address of val is printed 
        
    }

    printf("\n %u", ptr);   // same address is printed, even val is destroyed, hence ptr is dangling pointer

    ptr = NULL;   // solution
    printf("\n%u", ptr); // Now ptr is not a dangling pointer }

    return 0;

}