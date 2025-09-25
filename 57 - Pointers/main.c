#include <stdio.h>
#include <stdlib.h>
//Pointers are used to hold the address of some location in the memory
//Whenever a variable is declared, it is allocated in the primary memory or RAM
//We can store the location of the variable in pointers
//Then using pointers, we can manipulate that location for our purpose
int main()
{
    int var = 5;
    //Location or address is nothing but the byte number where the variable is allocated
    //The RAM can be considered as an array of bytes where the first byte is the zeroth byte which has the address 0
    //The second byte can have the address 2 and the third byte can have the address 3 and so on
    //We know an integer variable occupies 4 bytes, therefore let's say it occupies the following four addresses 6422092, 6422093, 6422094 and 6422095
    //However the pointer will only store the starting byte number of the variable as its address

    //The Unary operator (&) known as the 'address of' operator can be used in order to get the location or address of a particular variable during execution time
    //printf("%d", &var);
    printf("%p\n", &var);
    //%p is the format specifier used for pointers or addresses
    //&var returns the byte number or the address of the variable var
    //%p prints in hexadecimal format

    printf("%lu\n", &var);
    //Apart from hexadecimal, we can also print the address of the variable in an unsigned integer format

    //We can store the address of a variable in another variable of type pointer

    //In order to store the address of the variable var, we need to declare a pointer type integer variable
    int* ptr; //* means the variable is a pointer
    //Whatever is stored inside will be considered as an address of an integer type variable
    float* k; //Whatever is stored will be considered as an address of a float type variable
    double* d; //Similarly whatever is inside will be considered as an address of a double type variable
    //We have different types of pointer variables because there are different types of variables or datatypes and each datatype occupies a different size or number of bytes

    ptr = &var; //We store the address of the variable var in an integer type pointer ptr
    //Thus we say the pointer ptr points to the variable var
    //The value of the pointer ptr is the address of the variable var

    printf("%d\n", var); //Initial value of the variable var
    *ptr = 10; //This line is the equivalent of writing var = 10
    //Here we are de-referencing the address
    //*ptr basically means the value at the address stored inside ptr
    //Thus the value of the variable var would now be 10
    //Using pointers we can manipulate the content of the location using the address
    //In simple words, value at location stored inside ptr becomes 10

    printf("%d\n", var); //Printing the updated value

    *ptr = *ptr + 1; //Equivalent to writing var = var + 1
    //When we write *ptr = 10, *ptr means value at ptr becomes something
    //Thus the value of variable var would be 11
    printf("%d\n\n", var);

    //* is the de-referencing operator which we can use to access the value at the address stored by a pointer

    //If we use the name of the pointer or operate upon it, we are operating upon the address stored inside it
    //If we use an asterisk symbol or the de-referencing operator before the name of the pointer, before operating upon it, we are operating upon the value stored at the address inside the pointer

    //int *a, b;
    //* operator is right hand associative
    //Only a is an integer type pointer while b is a normal integer variable
    //The variable next to the * operator would be considered pointer only
    //Thus if we have to declare both a and b as pointers

    int *a, *b;
    int x = 100;
    //Pointers are also allocated memory in the stack area of the primary memory or the RAM and therefore has an address of it's own
    a = &x; //We store the address of x in a and using a we can manipulate the content of x
    //The benefit of pointer is that we do not need the name of the variable to be able to manipulate it's content
    //We can simply use the address kept to manipulate the content of the variable whose address is stored inside the pointer

    //Concept of pointer to pointer
    //We can have a pointer pointing to another pointer
    //This is possible because each pointer is assigned memory and has it's own address, which we can assign to another pointer
    int **y; //Here y is a pointer to a pointer
    //Whatever we keep inside y will be considered as an address of an integer pointer

    y = &a; //Assigning the address of the pointer a to pointer y
    //The variable y points to a which itself points to variable x, thus y is a pointer to a pointer

    //Example:
    //Value of x = 100, address = 6969  <- Value of a = 6969(address of x), address of a = 7474 <- Value of y = 7474(address of a), address of y = 8282

    //Using y, we can access a as well as x
    //*y is equivalent to a
    //**y is equivalent to *(*y) which is equivalent to *a which is equivalent to x

    printf("The value of x is: %d\n", **y);

    //Changing the content of x using y
    **y = **y + 1;
    printf("The updated value of x is: %d\n", x);

    //* operator means value at address
    //*y means value at y, which is the address of pointer a
    //**y means value at value at *y, which is value of x

    printf("Address of y: %d\n\n", &y);

    printf("Value of y: %d\n", y);
    printf("Address of a: %d\n\n", &a);

    printf("Value of *y: %d\n", *y);
    printf("Value of a: %d\n", a);
    printf("Address of x: %d\n\n", &x);

    printf("Value of **y: %d\n", **y);
    printf("Value of *a: %d\n", *a);
    printf("Value of x: %d\n", x);

    //When we encounter terms like 32 bit or 64 bit with regard to Operating Systems
    //It refers to the addressing scheme of the Operating System
    //If the Operating System is 32 bits, then it stores the addresses upto 32 bits, in other words it uses 32 bites to store an address
    //If the Operating System is 64 bits, then it stores the addresses upto 64 bits, in other words it uses 64 bits to store an address

    //The OS can manage 2^n bytes of memory (the addressable memory) where n is the number of bits it uses to store an address
    //If the Operating System is 32 bits, it can manage upto 2^32 bytes of memory, which is equivalent to 4GB (RAM)
    //If the Operating System is 64 bits, it can manage upto 2^64 bytes of memory.

    /*
    Example of a 2 bit Operating System:
    In other words the addressing scheme of the Operating System is 2 bits as it is using 2 bits to keep the addresses
    Total possible combinations for 2 bits in binary is:
    00
    01
    10
    11
    Therefore total number of unique addresses a 2 bit Operating System can store is: 4
    Addressable memory = 4 bytes
    Addressable memory = 2^2 bytes = 4 bytes
    Hence addressable memory = 2^n bytes, where n is the number of bits the Operating System uses to keep the addresses
    Further a 2 bit operating system cannot address the RAM beyond 4 bytes regardless of the size of the RAM
    The Operating System could only access the first four bytes and cannot access the rest of the memory no matter what the size of the RAM is
    */

    //The size of the addresses stored inside pointers is dependent upon the addressing scheme of the Operating System
    //For example, if the Operating System is 64 bits, all the pointers would be of 64 bits, i.e, 8 bytes
    //For example, if the Operating System is 32 bits, all the pointers would be of 32 bits, i.e, 4 bytes
    //For example, if the Operating System is 16 bits, all the pointers would be of 16 bits, i.e, 2 bytes
    //1 byte = 8 bits
    //The size of the pointer is therefore always fixed and it is dependent upon the addressing scheme of the Operating System

    //We can use the sizeof operator to get the size of a variable in the memory
    //The sizeof operator returns the amount of memory a variable occupies in bytes
    int* l;
    float* m;
    double* n;
    char* o;
    printf("Size of a character pointer: %lu\n", sizeof(o));
    printf("Size of a character variable: %lu\n\n", sizeof(*o)); //De-referencing the character pointer gives a character variable

    printf("Size of an integer pointer: %lu\n", sizeof(l));
    printf("Size of an integer variable: %lu\n\n", sizeof(*l)); //De-referencing the integer pointer gives an integer variable

    printf("Size of a float pointer: %lu\n", sizeof(m));
    printf("Size of a float variable: %lu\n\n", sizeof(*m)); //De-referencing the float pointer gives a float variable

    printf("Size of a double pointer: %lu\n", sizeof(n));
    printf("Size of a double variable: %lu\n\n", sizeof(*n)); //De-referencing the double pointer gives a double variable

    //Regardless of the type of a pointer variable, each pointer variable ultimately stores an address which is governed by the addressing scheme of the Operating System
    //The maximum number of bits an Operating System can handle is the size of the pointer in bits
    //The maximum number of bits an Operating System can handle / 8, is the size of the pointer in bytes
    //Thus the pointers have size according to the addressing scheme of the Operating System

    //Size of the pointer = Addressing scheme of the Operating System

    return 0;
}

/*Back when C was invented, a somewhat interesting choice was made. Variables would be declared in a kind of echo of how they would be used.
So

int a;
means "you can get an int out of a. Then,

int *a;
means you can get an int out of *a.

*/


