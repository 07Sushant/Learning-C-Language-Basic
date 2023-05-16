#include <stdio.h>
#include <string.h>

int main()
{
    // str function
    char ori[20], dup[20];
    char *z;
    printf("\n Enter your name: ");
    gets(ori);
    z = strcpy(dup,ori);
    printf("\nOriginal string is: %s", ori);
    printf("\nDuplicate string is: %s", dup);
    printf("\n Value of z is: %s",z);
    return 0;

}