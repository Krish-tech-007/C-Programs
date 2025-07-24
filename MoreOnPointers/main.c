#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 300; //Creating an integer variable
    char* k = (char*)&x; //We are explicitly casting the address of an integer variable as a character pointer and assigning it to the character pointer k
    //By using explicit casting, we can assign the address of any type of variable to a different type of pointer variable
    int* ptr = &x; //We are initializing an integer pointer variable ptr with the address of the integer variable x

    //We know an integer variable occupies 4 bytes of memory
    //We also known one byte has 8 bits
    //Therefore the memory structure could look like:
    //00000000 00000000 00000001 00101100

    //00000000                         00000000 00000001         00101100
    //^------^Most Significant Byte                              ^------^Least Significant Byte

    //00000000 00000000 00000001 00101100
    //^Most Significant Bit             ^Least Significant Byte

    //Since binary equivalent of 300 is 100101100 or 00000001 00101100
    //300/2 = 0(Least Significant Bit), 150/2 = 0, 75/2 = 1, 37/2 = 1, 18/2 = 0, 9/2 = 1, 4/2 = 0, 2/2 = 0, 1/2 = 1 (Most Significant bit)

    //Let's Suppose
    //00000000 00000000 00000001 00101100
    //6075     6074     6073     6072
    //Are the byte number or addresses for each of the location

    //When we assign the address of integer variable x to a character pointer variable k by explicitly casting
    //It treats it as an address of a character variable now
    //Therefore since we know a character variable occupies only one bytes
    //The character pointer only returns the Least Significant Byte or the Starting byte when de-referred
    //As a result data is lost

    //However when we assign the same address of an integer variable to an integer type pointer
    //It treats it only like the address of an integer variable
    //Since an integer variable occupies 4 bytes
    //The integer pointer returns all the 4 bytes that the integer variable occupies starting from the Least Significant Byte to the Most Significant Byte when it is dereffered
    //As a result, no data is lost

    printf("Value obtained by de-referencing character pointer: %lu\n", *k); //Since only the Least Significant Byte is accessible, the output is 44
    //Byte accessible to character pointer: 00101100
    printf("Value obtained by de-referencing integer pointer: %lu\n", *ptr); //Since all four bytes are accessible, the output is 300
    //Bytes accessible to integer pointer: 00000000 00000000 00000001 00101100

    //Summary:
    //The character pointer k is de-referencing 1 byte
    //Using k, we can get the content of only 1 byte if we de-refer
    //The integer pointer ptr is de-referencing 4 bytes
    //Using ptr, we can get the content of 4 bytes if we de-refer

    k = k + 1; //Moves 1(increment value) * 1(size of datatype)
    //The character pointer k now points to the next byte location or the second byte of variable x that is 6073, storing 00000001 which is 1 in decimal
    printf("New value obtained by de-referencing character pointer: %lu\n", *k);

    double* y = &x; //Assigning the address of an integer variable to a double pointer
    //I believe the compiler automatically upcasts the address implicitly to double pointer type
    printf("Value obtained by de-referencing double pointer: %lu\n", *y); //The value is intact and no data is lost

    return 0;
}

//Pointers are strongly typed
//This is because we do not use pointers just to store memory addresses but also to de-reference them
//And in order to de-reference a memory address, the compiler needs to know how to reach the next location

/*
For example:
int - 4 bytes
char - 1 byte
float - 4 bytes

int x = 1025;
byte 3        byte 2         byte 1         byte 0
00000000     00000000       00001000        0000001
^Sign bit used to represent sign of the integer

The pointer must match the datatype as each datatype occupies different number of bytes and differs in how information is processed
*/
