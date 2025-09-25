#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*while(1){ //Infinite Loop
    //Any non zero value in C is considered as true value
        printf("Hello World!\n");
    }*/

    int i = 1;
    while(i<=printf("Hi\n")){ //i=1, printf statement returns 3 each time after printing the statement, so loop runs for three times
        printf("Hello\n"); //This gets printed three times
        i++;
    }
    return 0;
}
