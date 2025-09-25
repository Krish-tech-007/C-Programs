#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int i, count = 0;
    //Solved using bitwise AND and bitwise left shift
    for(i = 0; i<sizeof(int)*8; i++){
        if((x & (1<<i)) == (1<<i)){
            count++;
        }
        /*
        int test = 1<<i;
        if(test&x){
            count++;
        }
        This algorithm also works because:
        If statement does not execute only if the result of an expression is 0
        If statement always executes if the result of an expression is anything but 0

        Since we are checking if a particular bit is set or not
        If it is set then the value of test&x would be non zero
        Else it would be zero

        Thus it executes only if the bit is set
        And does not execute if the bit is unset
        */
    }
    printf("The number of set bits in %d is: %d\n", x, count);
    return 0;
}

/* Why does -1 has all bits as set
In the context of binary numbers, particularly in signed integers using the Two's Complement system (which is commonly used in most computer systems),
the number -1 has all its bits set to 1.

Here's why:
Positive to Negative Conversion: To get the Two’s Complement representation of a negative number,
you first take the binary representation of the positive version of that number, flip all the bits (invert 0s to 1s and 1s to 0s),
and then add 1 to the least significant bit.

Example with 4 bits:

Binary representation of 1: 0001

Flip all bits: 1110

Add 1: 1110 + 1 = 1111

So in 4-bit binary, -1 is represented as 1111. This pattern holds true no matter how many bits you’re using: in 8-bit, 16-bit, or 32-bit representations, -1 still results in all bits being set to 1.

This approach not only makes the hardware simpler but also ensures that arithmetic operations are straightforward
Regardless of whether you're dealing with positive or negative numbers.

*/

/*
why doesn't the computer intrerpret it as 2147483647 while reading instead of -1
In the Two's Complement system, the interpretation of binary numbers depends on the context of signed and unsigned integers:

Signed Integers: In this system, the most significant bit (MSB) is treated as the sign bit.
If the MSB is 1, the number is negative; if it's 0, the number is positive.
So, a binary number like 1111 1111 1111 1111 1111 1111 1111 1111 (32 bits) is interpreted as -1 because the MSB is 1, signaling a negative number.

Unsigned Integers: For unsigned integers, all bits contribute directly to the numeric value without a sign.
In an unsigned 32-bit integer representation, the binary string 1111 1111 1111 1111 1111 1111 1111 1111 is interpreted as 2,147,483,647.

So, whether 1111 1111 1111 1111 1111 1111 1111 1111 is read as -1 or 2,147,483,647 depends on whether the number is being interpreted as a signed or an unsigned integer.
The context provided in the code (signed or unsigned variable) tells the computer how to interpret the bits.

Basically, an integer can store maximum of 2^31 values even though it has 32 bits, MSB is used to store sign.
If it is 1, it means the number is negative, else if it is 0, it is positive.
*/
