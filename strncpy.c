#include <stdio.h>
#include <string.h>


int main()
{
    char str[15],str2[15];
    int n;
    printf("\n Enter Source String: ");
    gets(str1);
    printf("\n Enter Designation String: ");
    gets(str2);
    printf("Enter number of charater to copy in designation string: ");
    scanf("%d", &n);
    strncpy(str2,str1,n);
    printf("\n SOurce string is: %.s",str1);
    printf("\n Destination String is: %s",str2);
    return 0;
}