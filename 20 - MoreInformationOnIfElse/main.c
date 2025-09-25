#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20;
    if(a<=b){
        printf("Hello World!");
    }
    //It is not always mandatory to write the else block along with the if block
    printf("This line will always be printed\n");

    if(a>b); //Adding a semicolon at the end of the line of the if condition, immediately terminates the if statement, the succeeding block is not considered a part of the if statement and is always executed
    {
        printf("Hello World!"); //This block is not considered a part of the if block and hence is always executed regardless of the statement being true or false
    }
    //If we were to add a corresponding else block to an if block where the if block was terminated by a semicolon, then it would not compile

    return 0;
}
