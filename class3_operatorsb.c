#include<stdio.h>
#include<conio.h>

int main(){

    int x,y,z;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    y=--x;
    z=x--;
    printf("%d,%d,%d",x,y,z);

    return 0;
}