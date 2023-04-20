#include <stdio.h>

int main()
{
    int x=10;
    char ch = 'A';
    float f = 10.11;
    void *gp;
    gp = &x;

    printf("\n Generic pointer point to the integer value = %d", *(int*)gp);
    gp=&ch;
    printf("\n Generic pointer point jow to the charater %c", *(char*)gp);
    gp = &f;
    printf("\n Generic pointer point towards  to the float %f", *(float*)gp);

    return 0;
}