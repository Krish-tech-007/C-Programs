#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Every 4th year is a leap year unless it is the 100th year, again the 400th year is a leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    //Using if else branching
    if(year % 4 == 0)//{
    //This block contains only one statement as if and else are considered as single statement
    //Hence the curly braces are commented since practically there is only one statement enclosed
        if(year%100 == 0)//{
            //This block contains only one statement as if and else are considered as single statement
            //Hence the curly braces are commented since practically there is only one statement enclosed
            if(year%400 == 0)
                printf("Leap year\n");
            else
                printf("Not a leap year\n");
        //}
        else
            printf("Leap year\n");
    //}
    else
        printf("Not a leap year\n");


    //Alternate method if else using conditional operators
    if((year%4==0 && year%100!=0) || (year%4==0 && year%400==0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    //Even simplified version
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    //Using ternary operator
    (year%4==0)?(year%100==0 ? (year%400==0 ? printf("Leap year\n") : printf("Not a leap year\n")) : printf("Leap Year\n")) : printf("Not a leap year\n");

    return 0;
}
