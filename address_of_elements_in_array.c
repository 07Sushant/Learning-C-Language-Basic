#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    printf("\n Printitng base address of the arrya: ");
    printf("\n%u %u %u", &a[0],a,&a);
    printf("\n Printitng address of all array elenets: ");
    
    for(i=0; i<5; i++)
    {
        printf("\n %u", &a[i]);
    }
    return 0;
}