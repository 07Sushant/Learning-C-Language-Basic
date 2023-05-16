#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long int i;
    char x[] = "10000000";
    i = atol(x);
    printf("%ld", i);
    return 0;
}