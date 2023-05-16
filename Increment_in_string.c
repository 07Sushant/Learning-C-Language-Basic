#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char x = 'a' + 1;
    printf("%c\n", x);
    printf("%c", ++x);
    return 0;
}