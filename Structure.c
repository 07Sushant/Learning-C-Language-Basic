#include <stdio.h>
struct car{
    char *name;
    int seats;
    float price;
};


int main()
{
    struct car mycar;
    mycar.name = "Sushant";
    mycar.price = 7000000000;
    mycar.seats = 2;
    printf("S %f %d \n", mycar.name, mycar.price, mycar.seats);
    
    
}