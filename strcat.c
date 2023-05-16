#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],str2[10];
    printf("\n Enter first string: ");
    gets(str1);
    printf("\n Enter second string: ");
    gets(str2);
    strcat(str1,str2);
    printf("\n String after concatenation: %s", str1);
    return 0;


}