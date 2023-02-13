///wap to print the detail of the student like name, reg. no., roll no., city, state, contact no., and cgpa using variables

#include <stdio.h>
#include <conio.h>

int main(){

    char name[10] = "Jyotsana" , state[10] = "Bihar", city[10] = "Darbhanga";
    int regi = 12220317, roll = 66 ;
    float cgpa = 5.25; 
    double contact = 7986143133;

    /// %s for char, %lf for double, %i for int, %f for float

    printf("\nName: %s", name);    
    printf("\nRegistration no.: %i",regi);
    printf("\nRoll no.: %i",roll);
    printf("\nCity: %s",city);
    printf("\nState: %s",state);
    printf("\nContact no.: %lf",contact);
    printf("\ncgpa: %f",cgpa);
    return 0;
}