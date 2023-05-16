#include <stdio.h>
#include <string.h>


int main() {
    char str1[20],str2[20];
    int x;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    x=strcmp(str1,str2);
    if(x==0){
        printf("Strings are equal\n");
    }
    else if(x>0){
        printf("first string is greater then second string");
    }
    else{
        printf("First string is less then second string");
    }
    return 0;
}