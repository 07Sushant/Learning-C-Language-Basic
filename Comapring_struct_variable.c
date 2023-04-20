#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s, s1;
    printf("Enter Information for Student 1: \n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // print the information of the first student
    printf("\nInformation of the first student: \n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    printf("\nEnter Information for Student 2: \n");
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // print the information of the second student
    printf("\nInformation of the second student: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    // compare the marks of the two students
    if (s.marks > s1.marks)
    {
        printf("\n%s has scored higher marks than %s.\n", s.name, s1.name);
    }
    else if (s.marks < s1.marks)
    {
        printf("\n%s has scored higher marks than %s.\n", s1.name, s.name);
    }
    else
    {
        printf("\n%s and %s have scored the same marks.\n", s.name, s1.name);
    }

    return 0;
}
