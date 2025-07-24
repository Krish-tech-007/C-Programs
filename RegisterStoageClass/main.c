#include <stdio.h>
#include <stdlib.h>
//When we declare a variable in our program, during it's execution the variable gets allocated in the primary memory area or the RAM
//When any operation is going to be performed on the variable, the variable is then copied in the register memory area in the processor within the CPU
//Register memory area in the CPU is the high speed area
//If we declare a variable in the register area itself, it can be more efficient
//Because the copying as well as reading and writing to and fro won't be required
//If we are using a variable frequently in our program, we can declare it within the register area of memory inside the CPU directly
//This can be done using the register keyword
//It is used with a local variable
//Declaring a variable with the keyword register does not guarantee it's going to be allocated memory in the register memory section of the CPU
//It is provisional to memory availability inside the register memory section of the CPU as it is a small area
//If memory is not available, then the variable is going to be allocated in the RAM section of the memory or the primary memory
//We cannot use the & operator with a register variable to get the address of a register variable, i.e, the address of operator(&)
//Trying to do so will lead to a compilation error

int main()
{
    register int count; //OS tries to allocate the count variable in the register section if sufficient memory is available
    for(count = 1; count <=1000; count++){
        //code
    }

    return 0;
}
