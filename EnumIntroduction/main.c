#include <stdio.h>
#include <stdlib.h>

typedef enum {
    SUN, MON, TUES, WED, THURS, FRI, SAT //These are enumeration constants defined within the block of enumeration
    //Enumerations are nothing but integers
    //We are providing names for the integer constants
    //By default, Whatever we declare as the first enumeration constant, it takes the value 0
    //The next enumeration constant will take the value 1, the next will take value 2 and so on
    //However, we can give different values to the constants as well
    //SUN, MON, TUE, WED, THURS = 70, FRI, SAT
    //In this case, SUN represents 0, MON represents 1, TUE represents 2, WED represents 3, THURS represents 70, FRI represents 71, FRI represents 72
    //If we do not provide any explicit value for any constant, it's value becomes the value of the previous constant + 1
}days_of_week; //days_of_week becomes an enumeration type where we are going to provide name for the days of the week

typedef enum{
    FALSE, TRUE
}boolean;

boolean isEven(int n){
    if (n%2==0)
        return TRUE;
    else
        return FALSE;
}
int main()
{
    //Sometimes in our programs, we may need named constants
    //When a value for a variable is pre-defined and fixed, we can use enum types

    //In order to represent days, we need to declare it as a days_of_weeks type
    days_of_week day;
    //The variable day is of days_of_week type and can process the enumeration constants defined within it

    day = SAT;
    if(day==SUN || day==SAT) //We can use the name instead of values
        printf("Holiday\n");
    else
        printf("Not a holiday\n");
    printf("Value of SUN is: %d\n", SUN);

    //Similarly, we do not have a boolean datatype in C

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(isEven(n))
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);

    return 0;
}
