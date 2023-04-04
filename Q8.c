//WAP a program to ask the user to enter name, city, and state and then display that to user using unformatted function

#include <stdio.h>
#include <string.h>

int main() {
    char name[100], city[100], state[100];
    char message[300] = "";
    int i;
    
    printf("Enter your name: ");
    gets(name);
    printf("Enter your city: ");
    gets(city);
    printf("Enter your state: ");
    gets(state);
    
    // strcat(message, name);
    // strcat(message, " from ");
    // strcat(message, city);
    // strcat(message, ", ");
    // strcat(message, state);
    
    // puts(message);

    return 0;
}

