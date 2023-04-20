#include <stdio.h>
struct Address
{
    char Houesename[25];
    char City[25];
    char Streetname[25];
};

struct Employee
{
    int id;
    char Name[25];
    float salary;

        struct Address Add;
        
};

int main()
{
    struct Employee E;
    printf("\n\t Enter Employee id: ");
    scanf("%d",&E.id);
}
