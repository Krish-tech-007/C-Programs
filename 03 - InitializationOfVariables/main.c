#include <stdio.h>
#include <stdlib.h>

int main()
{
    //If a variable is declared local inside a function, then it contains garbage values
    //The compiler never writes any implicit code to initialize such variables
    int var = 45;
    printf("var = %d\n", var);
    //Everything in memory is in binary format
    //Therefore the placeholder tells the format in which the binary data needs to be converted in

    //We can print the value of variable var in other formats also such as octal and hexadecimal

    printf("var = %o\n", var); //Prints the octal equivalent of the variable var
    //%o is the placeholder for octal type

    printf("var = %x\n", var); //Prints the hexadecimal equivalent of the variable var
    //%x is the placeholder for hexadecimal type

    //We can also initialize the content of integer variable with octal and hexadecimal values
    int var1 = 056; //Octal value being initialized to an integer type variable
    //Any numeric constant starting with a 0 is considered as an octal value
    printf("var1 = %d\n", var1); //Decimal
    printf("var1 = %o\n", var1); //Octal
    printf("var1 = %x\n", var1); //Hexadecimal

    int var2 = 0xa; //Hexadecimal value being initialized to an integer type variable
    //Any numeric constant starting with 0x is considered as a hexadecimal value
    printf("var2 = %d\n", var2); //Decimal
    printf("var2 = %o\n", var2); //Octal
    printf("var2 = %x\n", var2); //Hexadecimal



    return 0;
}
