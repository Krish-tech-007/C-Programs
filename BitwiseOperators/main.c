#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Useful for operating on bits
    //Bits can store boolean information
    //In system programming, boolean information is kept in set of bits
    //Using integer to store boolean information, 0 or 1 can lead to memory wastage and slow performance

    //Bitwise operators:
    //<< :bitwise left shift, to shift each and every bit of a variable towards it's left
    //>> :bitwise right shift, to shift each and every bit towards the right
    //&  :bitwise and operator
    //|  :bitwise or operator
    //^  :bitwise xor operator
    //~  :bitwise complement operator

    //~ which is bitwise complement operator, is unary in nature
    //All the other bitwise operators are binary in nature

    printf("Hello world!\n");
    return 0;
}
