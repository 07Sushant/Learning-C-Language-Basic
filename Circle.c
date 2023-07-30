// WAP to are of circle

#include <stdio.h>
#define PI 3.14
int main ()
{
    double area = 0.0, radius = 0.0;
    // int PI = 3.14;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;

}