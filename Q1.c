// write a program to find either the number enter by user is smallest or greater out of two varibale ?

#include <stdio.h>

int main(){
    int a, b;
    printf("\n");
    printf("Enter first variabel: \n");
    scanf("%d",&a);

    printf("Enter seconf variable: \n");
    scanf("%d",&b);
    if(a>b){
        printf("A is grater than B");
    
    }
    else{
        printf("B is Greater than A");
    }

    return 0 ;
}