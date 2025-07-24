#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    //Since we know an integer variable occupies 4 bytes which is equal to 32 bits
    //It's memory structure would look like this:
    //00000000 00000000 00000000 00000101

    x = x<<1;
    printf("x = %d\n", x);
    //This means every bit of x is going to shift left by one position
    //00000000 00000000 00000000 0000101X
    //There is a vacant bit represented by X which would be replaced by 0
    //So the memory structure would look like
    //00000000 00000000 00000000 00001010
    //Thus the value of x now becomes 10

    //It effectively multiplies the value with 2^i
    //If we write x<<i, it means x*2^i
    //For example, if x = 5, and we left shift all the bits by 2
    //Then it is equal to 5(value of x) * 4 (Value of 2^2)

    x = 5;
    x = x<<2;
    printf("x = %d\n", x);
    return 0;
}
