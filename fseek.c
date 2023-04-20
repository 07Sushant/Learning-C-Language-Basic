//Replacing a charcter 
#include <stdio.h>

int main()
{
    FILE*fp;
    char temp,name[];
    printf("Enter the name of file");
    scanf("%s", name);
    fp = fopen('name', "r+");
    while((temp = getc(fptr))!=EOF)
    {
        if (temp == 'x')
        {
            fseek(fp, -1,1);
            putc('y',fp);

        }
    }
    fclose(fp);
}
