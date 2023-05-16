#include <stdio.h>
#include <string>
int main()
{
    char  s1[100], s2[100];
    int i;
    prinf("\n Enter the string: ");
    gets(s1); \\ Hello

    i = 0;
    while (s1[i] !='\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';
    printf("\n Coplied string is %s", s2);
    return 0;
    
}