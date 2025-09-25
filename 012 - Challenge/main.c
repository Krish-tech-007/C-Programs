#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Equality operator is left to right associative
    printf("%d\n", printf("Hello")==printf("Hello"));
    printf("%d\n", printf("Angel")!=printf("Daemon"));
    //Guess the output
    //Predicted output:
    //HelloHello1
    //AngelDaemon1
    //Correctly guessed
    return 0;
}
