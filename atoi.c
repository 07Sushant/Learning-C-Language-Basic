#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char x[100]; 
    int i;
    
    printf("Enter a number as a string: ");
    scanf("%s", x); 
    
    i = atoi(x);
    printf("%d", i);
    
    return 0;
}