#include <stdio.h>

int main() {
    int a;            /* a is an integer */
    int *aPtr;        /* *aPtr set to address of a */

    a = 7;
    aPtr = &a;

    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", &a);
    printf("The value of aPtr is %p\n", aPtr);
    printf("The value stored at aPtr is %d\n", *aPtr);

    return 0;
}
