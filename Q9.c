// WAP a program to ask the user to enter the roll, regno, name, city, state, cgpa, and display it 

#include <stdio.h>


int main() {
    char roll[10], regno[20], name[50], city[50], state[50];
    float cgpa;
    
    printf("            Student Details\n\n");  // Heading at the top middle
    
    // Getting input from the user
    printf("Enter your Name: ");
    // getchar(name);
    printf("Enter your Roll Number: ");
    // getchar(roll);
    printf("Enter your Registration No: : ");
    puts(regno);
 
    printf("Enter your City: ");
    puts(city);
    printf("Enter your State: ");
    puts(state);

    putchar(name);
    puts(roll);
    puts(regno);
    
    puts(city);
    puts(state);
    
    // // Displaying the student details
    // printf("\nRoll Number: %s\n", roll);
    // printf("Registration Number: %s\n", regno);
    // printf("Name: %s\n", name);
    //    printf("Enter your CGPA: ");
    // printf("%f",cgpa);
    // printf("City: %s\n", city);
    // printf("State: %s\n", state);
    // // printf("CGPA: %.2f\n", cgpa);
    
    return 0;
}
