#include <stdio.h>

void Addition() {
    char x = 'a' + 1;
    printf("%c\n", x);  
}

void Subtraction() {
    char x = 'a' - 1;
    printf("%c\n", x);  
}

void Increment(char *x) {
    printf("%c", ++(*x));  
}

void Decrement(char *x) {
    printf("%c", --(*x));  
}

int main() {
    char x = 'a';
    int choice;

    printf("Enter the operation to perform:\n");
    printf("1. Addition\n2. Subtraction\n3. Increment\n4. Decrement\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Increment(&x);
            break;
        case 4:
            Decrement(&x);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}