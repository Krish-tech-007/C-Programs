#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {10,20,30,40,50};
    //Array is a contiguous block of memory, which means elements are allocated one after the other
    //Example: If the address of the first element of an integer array is 5000, then the address of the next element will be 5004, the next 5008, and so on
    //Thus using pointer arithmetic with arrays make sense as we know we will get a correct value after incrementing the pointer upto a finite term

    //Always, the base address of the array or the address of the first element is assigned implicitly to the name of the array
    //The name of the array is always a pointer to the first element of the array by default
    //Example: If x is the name of our integer array, x is a integer pointer to x[0] element of the array
    //When we de-reference x, it's always going to be 4 bytes
    printf("First element of array x: %d\n", *x);

    //Assuming the base address of x or the value of x or the address of the first element of the array x is 5000
    //So If we write x + 0, it's going to be 5000. If we write x + 1, it's going to be 5004, if we write x + 2, it's going to be 5008.
    //This is because x is an integer pointer, so incrementing it by 1 will add 4 to the address it stores

    //For 1D array, x + i will always give us the address of the ith element of the array
    //For 1D array, *(x+i) will always give us the value of the ith element of the array

    //If we write *(x+1), it will give the value of the second element of the array

    //Therefore, x[i] is equivalent to *(x+i)
    //[] is the subscription operator which is a binary operator which converts the expression in the pointer form which the compiler writes in the object file
    //Practically there is no concept of indices, instead the index refers to the value that we add to the base address
    //When the compiler encounters x[i] it replaces it with *(x+i)
    //Similarly, if we write i[x], it will also work
    //This is because the compiler will replace it with *(i+x) when it encounters the subscription operator
    //x+i and i+x will give the same address as output and the same content when de-referrenced
    printf("Value of the first element of the array: %d\n", 0[x]);

    /*
    Note the below example is my own test:
    The below example works only because we found that the address of the first element or the value of x was 6422064
    This will refresh each time we close this compiler and open it back
    printf("Address of the first element of x: %d\n", &x[0]);
    printf("Address of the first element of x: %d\n", x);
    printf("Value of the first element of x: %d\n", *( (int*)(6422064) )); //We ask the compiler to treat the integer value as an address of an integer variable
    */

    printf("Address of the first element of x: %p or %d\n", &x[0], &x[0]);
    printf("Address of the first element of x: %p or %d\n", x, x);
    printf("Address of the first element of x: %p or %d\n", x+0, x+0);

    int i;
    printf("Content of the array\n");
    for(i = 0; i<5; printf("Value at index %d: %4d\n", i, *(x+i)),i++);

    return 0;
}

/*
    Summary:
    1. Name of the array stores the base address of the array or the address of the first element of the array
    2. (array_name + i) gives the address of the ith element of the array
    3. *(array_name + i) gives the content of the ith element of the array
    Example: array_name + 0 gives the first element of the array and array_name + 1 gives the second element of the array
    4. x[i] is converted to *(x+i)
*/

