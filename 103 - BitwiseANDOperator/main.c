#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10; //00000000 00000000 00000000 00001010
    int y = 7;  //00000000 00000000 00000000 00000111
    int z = x & y; //It means each bit of x is going to be "and" with corresponding bit of y
    //  ... 00001010
    //+ ... 00000111

    //  ... 00000010
    //z is equal to 2

    printf("z = %d\n", z);

    //Use of bitwise AND:
    //We can check if a particular bit is 0 or 1
    //That is the value of the variable is set(1) or unset(0)
    //If we want to know the nth byte of variable from the right is 1 or 0
    //We bitwise AND it with another variable with 2^n-1
    //Suppose a variable stores the integer variable 10
    //The memory structure would be 00000000 00000000 00000000 00001010
    //If we want to know whether the fourth byte from the right is 0 or 1
    //We can AND the variable with 2^3(4-1)
    //If the resulting value is equal to 2^3, then that particular bit is 1
    //Else it is 0

    //This is because the memory structure of x would be
    //00000000 00000000 00000000 00001010
    //And the memory structure of y would be
    //00000000 00000000 00000000 00001000
    //If we AND these two together, then
    //The result would be y, hence that bit is 1

    //General operation
    //If x & 2^i = 2^i, then i+1th byte from the right or the ith indexed byte from he right is 1 else 0

    //Program: Checking if a number is odd or even without using modulo operator

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //For a number to be odd, it's first byte or the zeroth index byte from the right must be 1
    int check = 1; //2^0
    if(n&check){
        printf("Odd.\n");
    }
    else{
        printf("Even.\n");
    }
    //The zeroth bit of a number is the odd contributor
    //While the rest of the bits are even contributors

    return 0;
}
