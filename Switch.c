# include <stdio.h>
int main(){
    int pt;
    printf("Enter the number of nodes: ");
    scanf("%d", &pt);
    switch(pt){
        case 0:
        printf("\n No Geomoetry");
        break;

        case 1:
        printf("\n A point");
        break;

        case 2:
        printf("\n A line");
        break;

        case 3:
        printf("\n A triangle");
        break;
        default:
        printf("Invalid Input");
        break;

    }

        return 0;

}