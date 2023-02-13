#include <stdio.h>
int main(){

    int x  = 3, y, z;
    y = x++;  // store before updating 
    z = ++x; // update then stores

    printf("\n");

    printf("Enter the value of X: ");
    scanf("%d", &x);

    // printf("Enter the value of Y: ");
    // scanf("%d", &y);

    // printf("Enter the value of Z: ");
    // scanf("%d", &z);


  
  
  
  
  
  
  
    printf("\n%d,%d,%d",x,y,z);
    printf("\n");

    return 0;
}