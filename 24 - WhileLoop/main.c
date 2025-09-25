#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A loop is used to simply doing repetitive tasks
    int i;
    i = 1; //Initialization of the counter variable
    //Not mandatory to start at 1
    while(i<=10) //Termination condition
    {
        printf("Hello World!\n");
        i++; //Modification of the counter value
    }
    return 0;
}
