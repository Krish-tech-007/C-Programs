#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;
    printf("Enter a positive number and negative for termination ");
    scanf("%d", &num);
    while(num>=0){
        sum += num;
        printf("Enter a positive number for input and negative for termination");
        scanf("%d", &num);
    }
    printf("The sum of the entered numbers is: %d\n", sum);
    return 0;
}
