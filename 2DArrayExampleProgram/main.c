#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salesperson, i, j, items;
    printf("Enter no. of salesperson: ");
    scanf("%d", &salesperson);
    printf("Enter no. of items: ");
    scanf("%d", &items);

    float data[salesperson][items];
    float sum = 0;

    for(i=0;i<salesperson;i++){
        for(j=0;j<items;j++){
            printf("Enter amt for Salesperson %d for item %d: ", i+1, j+1);
            scanf("%f", &data[i][j]);
        }
}
    printf("\n\n");
    printf("---------------------------------------------------\n");
    printf("Sales Data\n");
    printf("---------------------------------------------------\n");
    printf("\n\n");

    for(i = 0; i<salesperson;i++)
    {
        printf("Sales data for Salesperson no. %d\n", i+1); //Note if there is a placeholder in printf but no corresponding variable, then the compiler prints some garbage values
        printf("---------------------------------------------------\n");
        sum = 0;
        for(j=0; j<items;j++){
                printf("\tItem %d     : %4.2f\n", j+1, data[i][j]);
                sum += data[i][j];
        }
        printf("\tTotal      : %4.2f\n", sum); // \t is the tab character that prints the string four characters to the right
        printf("\tCommission : %4.2f\n\n", (sum*0.1));
    }

    return 0;
}
