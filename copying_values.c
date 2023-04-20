#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s, s1;
    printf("Enter Information: \n");
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

    // copy the information of the first student to the second student
    s1 = s;

    // print the information of the second student
    printf("\nInformation of the second student: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);

    return 0;
}
