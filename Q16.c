// WAP a program to enter the record of five student using struct

#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct student s[5];

    for (int i = 0; i < 5; i++) {
        printf("\n Please enter the  details students %d:\n", i+1);

        printf("Enter Student name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter Student roll no: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Student marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }

    printf("\n\nStudent Records\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of student %d:\n", i+1);
        printf("Name: %s", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %f\n", s[i].marks);
    }

    return 0;
}
