#include <stdio.h>
long long gcd(long long a, long long b)
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2 || n > 20) {
        printf(" Input toh sahi dalo bhai \n");
        return 1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = lcm(result, i);
        if (result == 0) {
            printf("Error agya bhai\n");
            break;
        }
    }
    printf("%lld\n", result);
 return 0;
}

//07Sushant
