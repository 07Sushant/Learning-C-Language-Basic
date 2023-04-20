#include <stdio.h>

int main()
{
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int *p1, *p2;

    p1 = arr;
    p1++; // p1 will point towards next memory 

    // Loaction 
    printf("\n n%d", p1);  // 2  wil be displayed
    p1--;

    // Location

    printf("\n%d", *p1);   // 1 will be  displayed 
    p1 = p1 + 2;   // Adding a constant to pointer (p1 will point twd third elelemnt)

    printf("/n% d", *p1)




    return 0;
}