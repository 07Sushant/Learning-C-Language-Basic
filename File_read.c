#include <stdio.h>
#include <stdlib.h> 

void main()
{
    FILE *fptr;
    char c;
    clrscr();
    fptr = fopen("a.txt", "r");
    printf("The line of text is: ");
    while (c = getc(fptr) !=EOF)
    {
        printf("%c", c);      
    }
    
    fclose(fptr);
    getch();
}