#include<stdio.h>
#include<conio.h>

int main(){

    int a,b,c;
    printf("Enter the value of a: ");
    scanf("\n%d",&a);
    printf("Enter the value of b: ");
    scanf("\n%d",&b);
    c=a++ +b;
    printf("%d,%d,%d",a,b,c);

    return 0;
}