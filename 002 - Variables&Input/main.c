#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables are named memory locations where we can store some value
    //The compiler writes some instruction for the operating system to allocate some memory space in primary memory
    //We have to mention the type of variable
    //We can use a variable only after it's declaration
    int aVar;
    aVar = 5;

    float x; //4 bytes
    x= 3.56;
    double d;//8 bytes, hence can accommodate more values

    /* Rules for declaring a variable:
       1. Cannot start with a number
    */

    printf("Enter an integer: "); //Prompt for the user

    //Input from keyboard
    //Using scanf function which is a library function
    scanf("%d", &aVar); //scanf takes two parameters, first which type of data and second is which variable scanf should assign this value
    //The variable address is required because the variable has a particular scope in this case a local scope, therefore when we call the scanf function
    //The control will jump to that scanf function library and it would need to assign the value to the variable written somewhere else which it cannot access
    //The variable address is basically the byte number where the variable is declared in the execution period in memory
    //Using & operator with any variable will give it's byte number, where the variable is allocated in the primary memory



    //The Operating System interacts with the hardware of our computer
    //All input is done through text characters
    //When we specify the type we are expecting using format specifiers, the Operating System will make the necessary conversions
    //There are various format specifiers for example %d for signed integers and %u for unsigned integers

    int anotherVar;
    anotherVar = aVar + 1;

    printf("The value is: %d and %d\n", aVar, anotherVar);

    return 0;
}
