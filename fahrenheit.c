//Temperature converter

int main(void)
{
    int farhenheit, celsius;
    printf("Please enter farenheit as an integer: ");
    scanf("%d", &farhenheit);
    celsius = (farhenheit - 32) / 1.8;   // note conversion
    printf("\n %d farehheit is %d celsius.\n");
    return 0;

}