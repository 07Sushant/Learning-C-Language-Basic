#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], temp;
    int i , j;
    printf("\n Enter the string: ");
    gets(str1);
    i = 0;
    j = strlen(str1) -1;
    
    while (i < j) {}
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;

    }
    
    
    return 0;
}