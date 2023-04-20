#include <stdio.h>

int main()
{
    FILE *fptr;
    char c;

    fptr = fopen("a.txt", "w");
    if (fptr == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    printf("Enter the line of text. Press enter to stop:\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            break;
        }
        putc(c, fptr);
    }

    fclose(fptr);
    return 0;
}
