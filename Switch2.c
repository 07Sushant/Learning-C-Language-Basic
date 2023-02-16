# include <stdio.h>
int main(){
    char pt;
    printf("Enter the number of nodes: ");
    scanf("%c", &pt);
    switch(pt){
        case 'A':
        printf("\n No Geomoetry");
        break;

        case 'B':
        printf("\n A point");
        break;

        case 'C':
        printf("\n A line");
        break;

        case 'D':
        printf("\n A triangle");
        break;
        default:
        printf("Invalid Input");
        break;

    }

        return 0;

}