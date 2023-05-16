
// WAP  to find the sum and mean of !d array elelments using pointer to an array

#include <stdio.h>

int main() {
    int n, arr[20], sum = 0;
    int *pn = &n, *parr = arr, *psum = &sum;
    float mean = 0.0, *pmean = &mean;
    
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", pn);
    
    printf("\nEnter the elements of the array:\n");
    for(int i = 0; i < *pn; i++) {
        scanf("%d", (parr + i));
        *psum += *(parr + i);
    }
    
    *pmean = (float) *psum / *pn;
    
    printf("\nThe sum of the array elements is: %d", *psum);
    printf("\nThe mean of the array elements is: %f", *pmean);
    
    return 0;
}
