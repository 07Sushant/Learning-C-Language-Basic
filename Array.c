#include<stdio.h>

int main(){
    int a[100],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter arrays elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array elements are :");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}
