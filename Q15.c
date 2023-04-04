// WAP a program to enter the record of one student using struct

#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct student s;

    printf("Enter Your name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Your roll no: ");
    scanf("%d", &s.roll_no);

    printf("Enter Your marks: ");
    scanf("%f", &s.marks);

    printf("\n\nStudent Record\n");
    printf("Name: %s", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
