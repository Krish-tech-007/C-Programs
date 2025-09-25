#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    //Since we know an integer variable occupies 4 bytes which is equal to 32 bits
    //It's memory structure would look like this:
    //00000000 00000000 00000000 00000101

    x = x>>1; //It means we are shifting each bit of x to the right by one position
    //X0000000 00000000 00000000 00000010
    //X is a vacant space that is represented by 0
    //If it was a positive number, the left most significant bit would be 0
    //If it was a negative number, the left most significant bit would be 1
    //So the memory structure would finally look like
    //00000000 00000000 00000000 00000010
    //Hence the value of x becomes 2

    printf("The value of x = %d\n", x);

    //The value is effectively going to be divided with 2^i
    //Thus if we write x = x>>i;
    //Then it is equivalent to dividing x by 2^i
    return 0;
}
