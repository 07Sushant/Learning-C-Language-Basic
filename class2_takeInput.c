#include <stdio.h>
#include <conio.h>

int main(){

    int roll;
    char name[10];

    printf("Enter your name:\n");
    scanf("%s",&name);
    printf("Enter your roll:\n");
    scanf("%i",&roll);
    printf("Your name is: %s\n",name);
    printf("Your roll is: %i\n",roll);
    return 0;
}