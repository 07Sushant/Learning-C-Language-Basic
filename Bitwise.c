#include <stdio.h>
int main(){
    int a, b;
    printf("\n");
    printf("Enter the valur of A: ");
    scanf("%d", &a);
    printf("Enter the valur of B: ");
    scanf("%d", &b);
    printf("\n");
    printf("The value of A: =%d, The Value of B: =%d\n", a, b);
    printf("a & b = 	%d\n", a&b);
    printf("a | b = 	%d\n", a|b);
    printf("a ^ b = 	%d\n", a^b);
    printf("~a = 		%d\n", ~a);
    printf("a << 2 = 	%d\n", a<<2);
    printf("a >> 2 = 	%d\n", a>>2);

    return 0;

}