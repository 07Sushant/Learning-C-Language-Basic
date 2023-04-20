#include <stdio.h>

union employee
{
    char name[30];
    int id;
    float salary;   
} u[100];

int main()
{
    // union employee u[100]
    int n,i;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        printf("\n Enter name: ");
        fflush(stdin);
        gets(u[i].name);
        printf("\n Entered name is: %s", u[i].name);
        printf("\n Enter id: ");
        fflush(stdin);
        scanf("%d", &u[i].id);
        printf("\n Entered id is: %d", u)


    }
}


#include <stdio.h>

union employee
{
    char name[30];
    int id;
    float salary;   
} u[100];

int main()
{
    int n,i;
    printf("\nEnter the number of employees (up to 100): ");
    scanf("%d", &n);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        printf("\nEnter name: ");
        fflush(stdin);
        gets(u[i].name);

        printf("Enter id: ");
        scanf("%d", &u[i].id);

        printf("Enter salary: ");
        scanf("%f", &u[i].salary);

        printf("\nEntered employee details are:\nName: %s\nID: %d\nSalary: %.2f\n", u[i].name, u[i].id, u[i].salary);
    }
    
    return 0;
}
