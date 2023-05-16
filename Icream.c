#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ice_cream {
    int id;
    char name[50];
    float price;
};

void display_ice_creams() {
    // Open the file in read mode
    FILE *fptr = fopen("ice_creams.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return;
    }
    
    struct ice_cream ic;
    // Read data from file and display on screen
    while (fscanf(fptr, "%d %s %f", &ic.id, ic.name, &ic.price) == 3) {
        printf("%d. %s - Rs.%.2f\n", ic.id, ic.name, ic.price);
    }
    
    fclose(fptr);
}

void add_ice_cream() {
    // Open the file in append mode
    FILE *fptr = fopen("ice_creams.txt", "a");
    if (fptr == NULL) {
        printf("File not found!\n");
        return;
    }
    
    struct ice_cream ic;
    // Prompt user for input
    printf("Enter ID: ");
    scanf("%d", &ic.id);
    printf("Enter name: ");
    scanf("%s", ic.name);
    printf("Enter price: ");
    scanf("%f", &ic.price);
    // Write data to file
    fprintf(fptr, "%d %s %.2f\n", ic.id, ic.name, ic.price);
    
    fclose(fptr);
}

void update_ice_cream() {
    // Open the file in read and write mode
    FILE *fptr = fopen("ice_creams.txt", "r+");
    if (fptr == NULL) {
        printf("File not found!\n");
        return;
    }
    
    struct ice_cream ic;
    int id, found = 0;
    // Prompt user for input
    printf("Enter ID to update: ");
    scanf("%d", &id);
    // Read data from file and update if ID matches
    while (fscanf(fptr, "%d %s %f", &ic.id, ic.name, &ic.price) == 3) {
        if (ic.id == id) {
            printf("Enter new name: ");
            scanf("%s", ic.name);
            printf("Enter new price: ");
            scanf("%f", &ic.price);
            fseek(fptr, -1*sizeof(struct ice_cream), SEEK_CUR);
            fprintf(fptr, "%d %s %.2f\n", ic.id, ic.name, ic.price);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Ice cream not found!\n");
    }
    
    fclose(fptr);
}

void search_ice_cream() {
    // Open the file in read mode
    FILE *fptr = fopen("ice_creams.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return;
    }
    
    struct ice_cream ic;
    char name[50];
    int found = 0;
    // Prompt user for input
    printf("Enter name to search: ");
    scanf("%s", name);
    // Read data from file and search if name matches
    while (fscanf(fptr, "%d %s %f", &ic.id, ic.name, &ic.price) == 3) {
        if (strcmp(ic.name, name) == 0) {
            printf("%d. %s - Rs.%.2f\n", ic.id, ic.name, ic.price);
            found = 1;
        }
    }

    if (!found) {
        printf("Ice cream not found!\n");
    }

    fclose(fptr);
}




void delete_ice_cream() {
// Open the file in read and write mode
FILE *fptr = fopen("ice_creams.txt", "r+");
if (fptr == NULL) {
printf("File not found!\n");
return;
}

struct ice_cream ic;
int id, found = 0;
// Prompt user for input
printf("Enter ID to delete: ");
scanf("%d", &id);
// Read data from file and delete if ID matches
while (fscanf(fptr, "%d %s %f", &ic.id, ic.name, &ic.price) == 3) {
    if (ic.id == id) {
        found = 1;
        break;
    }
}

if (found) {
    // Create a temporary file in write mode
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error creating temporary file!\n");
        return;
    }
    
    // Read data from original file and copy to temporary file, except the one to be deleted
    rewind(fptr);
    while (fscanf(fptr, "%d %s %f", &ic.id, ic.name, &ic.price) == 3) {
        if (ic.id != id) {
            fprintf(temp, "%d %s %.2f\n", ic.id, ic.name, ic.price);
        }
    }
    
    // Close original and temporary files
    fclose(fptr);
    fclose(temp);
    
    // Remove the original file and rename the temporary file
    remove("ice_creams.txt");
    rename("temp.txt", "ice_creams.txt");
    
    printf("Ice cream record deleted successfully!\n");
} else {
    printf("Ice cream not found!\n");
}

}

int main() {
int choice;
do {
printf("\nICE CREAM SHOP\n");
printf("1. Display ice creams\n");
printf("2. Add new ice cream\n");
printf("3. Update an ice cream\n");
printf("4. Search an ice cream\n");
printf("5. Delete an ice cream record\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);


    switch(choice) {
        case 1:
            display_ice_creams();
            break;
        case 2:
            add_ice_cream();
            break;
        case 3:
            update_ice_cream();
            break;
        case 4:
            search_ice_cream();
            break;
        case 5:
            delete_ice_cream();
            break;
        case 6:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
} while (choice != 6);

return 0;
}
