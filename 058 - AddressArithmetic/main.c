#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Performing addition and subtraction operations on pointers
    //We cannot perform multiplication or division operations on pointers

    int x = 10; //Declaring an integer variable x
    int* ptr; //Declaring an integer pointer
    ptr = &x; //Assigning the address of integer variable x to integer pointer variable ptr

    printf("Content of ptr    : %lu\n", ptr); //%lu is format specifier for unsigned long integer
    printf("Size of an integer: %d bytes\n", sizeof(int));
    printf("Content of ptr+1  : %lu\n", ptr+1);

    //In simple words, incrementing a pointer by 1 takes us to the address of the next integer. Which is 4 bytes more than the current memory location
    //Since each address is a byte number or a byte location, the new address will be 4 more than the previous one
    //Thus since the integer pointer stores a byte address of an integer variable, incrementing it by 1 increases it's value by 4

    //Let's say address of x is 6422084 which is stored inside the pointer variable ptr
    //When we increment the ptr pointer variable by one, it's new value becomes 6422088, (increments by 4) instead of 1
    //This is because an integer variable occupies four bytes, thus when we increment an integer pointer variable by 1, it skips four bytes
    //Since 6422084, 6422085, 6422086 and 6422087 are the four byte memory addresses reserved by the integer variable x
    //When the pointer variable ptr is incremented by one, it skips these 4 addresses to the next block of memory
    //In other words the pointer variable when incremented by n times, the address it stores is incremented by n * number of bytes the datatype occupies

    ptr = ptr + 2;
    printf("Content of ptr+2  : %lu\n\n", ptr);

    //Similarly if we increment a double pointer by 1, it would add 8 to the address it stores
    //This is because each double variable occupies 8 bytes in memory

    //The same mechanism applies when we decrease a pointer variable n times
    //As a result, the address stored inside the pointer variable would decrease n * number of bytes the datatype occupies

    double m = 100.00;
    double* q;
    q = &m;

    printf("Content of q             : %lu\n", q);
    printf("Size of a double variable: %d\n", sizeof(double));
    printf("Content of q-5           : %lu\n\n", q-5);

    //Let's say address of double variable is 6422064
    //If we declare a double pointer variable to assign the address of the double variable
    //When we decrement the double pointer variable's value by 5
    //The address it stores inside gets decremented by 5 * 8(number of bytes a double variable is allocated in memory)
    //Thus the value of the double pointer variable would become 6422024

    //Challenge:
    double *a = (double *)10000; //Casting an integer to a double pointer
    double* b = (double*)2000; //Casting an integer to a double pointer
    //We simply cannot assign an integer value to a double pointer, thus it needs to be casted first to a double pointer

    //Thus the pointer a points to the 10000th byte or location of memory
    //Thus the pointer b points to the 2000th byte or location of memory

    printf("Value of pointer a                 = %d\n", a);
    printf("Value of pointer b                 = %d\n", b);
    printf("Size of double variable: %d bytes\n", sizeof(double));
    printf("Value of pointer subtraction a - b = %d\n", a - b);
    //Guess the output
    //The output could either be simple subtraction of the addresses of the two pointers = 8000
    //Wrong guess

    //Correct output: 1000
    /*
    Explanation:
    If we have two double pointers, one pointing to the 10000th byte of memory and another to the 2000th byte of memory
    If we calculate the difference between these two pointers
    The difference between two pointers is calculated as the number of locations it will take according to the datatype
    In other words it is the number of locations of the given datatype available between the two pointers

    In this case, the difference between two double pointers will be the number of double locations it takes to reach
    In other words it is the number of double locations available between the two pointers
    Thus the difference will be calculated as (a - b) / (number of bytes a double variable occupies)
    Which evaluates to (10000 - 2000) / 8
    Which evaluates to 8000 / 8
    Which results in 1000 as the output
    */

    //Subtraction between two pointers is the number of memory locations that need to be skipped according to the datatype in order to reach
    //In other words it is the number of locations of the datatype that are available between the two pointers
    //Suppose a and b are two pointers of the same type, then their difference would be
    //a - b = [Value of a (address stored inside a) - Value of b(address stored inside b) ] / (size of the datatype)
    //In other words, what should be added to b to get a

    return 0;
}

/*
    Summary:
    Incrementing or decrementing a pointer, increments or decrements the address it stores by the size of the datatype that the pointer points to
*/
