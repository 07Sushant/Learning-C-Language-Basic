#include <stdio.h>
struct car
{
    char *name[];
    int seats;
    float price;    
};

int main()
{
    struct car mycar = {"Sushant", 2, 5000000};
    struct car *mycarPtr; 
    mycarPtr = &mycar;


    printf("%s %f %d \n%s %f %d \n%s %f %d\n")
    mycar.name, mycar.price, mycar.seats;
    mycarPtr->name 
}