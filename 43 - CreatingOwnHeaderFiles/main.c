#include <stdio.h>
#include <stdlib.h> //When including a header file included with the compiler, we use <>
#include "mathHeader.h" //When included external header files not included with the compiler, we use ""

int main()
{
    //We can create our own header files for distributing our functions to other users
    printf("Hello world!\n");
    add(1,1);
    subtract(2,1);
    return 0;
}
