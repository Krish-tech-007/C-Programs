#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //sprintf is a standard library function
    //It can be used to write a formatted string into a character array
    //It is included in the string.h header file
    //It automatically appends a null character at the end
    //Return type of sprintf() function is integer
    //It returns the number of values written in the character array, excluding the null character
    int val1 = 10;
    double val2 = 2.25;
    char buffer_string[100];

    int count = sprintf(buffer_string, "val1 = %d and val2 = %lf", val1, val2);
    printf("%s\n", buffer_string);
    printf("Number of characters written: %d\n", count);

    //snprintf() function is a variation of sprintf()
    //sprintf() function does not check for overflow
    //As a result if the data to be stored inside the array is more than it's size, then the program crashes
    //If there is a chance of buffer overflow, we use the function snprintf() instead of sprintf()
    //It will ignore all the overflow characters if any
    //We also need to specify the maximum size the buffer can store

    char buffer_string2[20];
    int count2 = snprintf(buffer_string2, 19, "val1 = %d and val2 = %lf", val1, val2);
    printf("%s\n", buffer_string2);
    printf("Number of characters written: %d\n", count2);

    return 0;
}
