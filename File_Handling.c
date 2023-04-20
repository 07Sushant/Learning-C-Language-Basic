#include <stdio.h>
#include <stdlib.h> 

void main()
{
    FILE *fptr;
    system("cls"); 
    fptr = fopen("a.txt","w");

    if (fptr == NULL)
        printf("\n File cannot be open for creation");
    else
        printf("\n file created successfully");
    fclose(fptr);
}
