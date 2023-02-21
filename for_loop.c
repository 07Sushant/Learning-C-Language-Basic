// printitng 1 to 10 in ascending using for loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the number %d\n\n", n);
    for (n; n>0; n=n-1){
        printf("%d\n",n);
    }
    return 0;
}
