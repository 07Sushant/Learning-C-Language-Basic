#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 123;
    char str[100];
    itoa(a, str,2);
    printf("\n Binary Value: %s", str);
    itoa(a,str,10);
    printf("\n Decimal Vlaue: %s", str);
    itoa(a,str,16);
    printf("\n Hexadecimal Value: %s", str);
    itoa(a,str,8);
    printf("\n Octa Value: %s", str);
    return 0;
}