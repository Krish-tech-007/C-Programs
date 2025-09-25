#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In C programming, the function printf is used to print formatted strings into the output console
    int i;
    i = printf("Hello\n"); //Variable i holds the return value of the printf statement
    //As per the documentation of the printf function, the return value of printf is is integer, i.e, the number of character the printf successfully prints to the output console
    printf("No. of characters successfully printed (i): %d\n", i);

    //Another Example
    printf("No. of characters successfully printed: %d\n", printf("Hello World\n"));
    //Printf statement nested inside another
    //When there are nested functions, the inner function is going to be called first
    return 0;
}
