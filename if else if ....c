#include <stdio.h>
int main(){
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);
    if(marks>90 && marks <=100){

        printf("Grade A");

    }
    else if (marks>80 && marks<=90){
        printf("Grade B");
    }

    else if (marks>70 && marks){

        printf("Grade C");
    }
    else if (marks>60 && marks >=70){

        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;
}
