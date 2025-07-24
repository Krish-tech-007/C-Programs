#include <stdio.h>
#include <stdlib.h>

int main()
{

    float* k[10];
    //k is an array of floating pointer
    //each element of k is a floating pointer
    //each element of k can hold the address of a float type variable

    char* str[30];
    //str is an array of character pointer
    //each element of str is a character pointer
    //each element of str can hold the address of a character type variable

    int* x[3];
    //x is a 1D array of pointers
    //each element of x is an integer pointer
    //Thus each element of x can hold the address of one integer variable

    //Lets's take the example of the integer array of pointers x
    //Suppose x has a base address 5000
    //Then according to the Operating System address scheme,
    //For example, if the addressing scheme of the Operating System is 64 bit (equivalent to 8 bytes)
    //Each pointer would occupy 8 bytes each
    //Therefore the next pointer element would be at 5008
    //And the last pointer element would beat 5016

    //Name of 1D array is a pointer to a pointer
    //Thus if we need to assign the name of the array of a pointers to a variable
    //The variable should be a pointer to pointer of the same type as well

    int **ptr = x; //Means you can get an integer out of a **ptr

    //My own experiment
    /*
    int *l = x;
    int **j = x;
    printf("Value of *x: %lu\n", *x); //Same value
    printf("Value of *l: %lu\n", *l); //Same value
    //printf("Value of **x: %lu\n", **x);
    //printf("Value of **j: %lu\n", **j);
    //The above statement does not work
    */

    int a[] = {1,2,3};
    int b[] = {10,20,30};
    int c[] = {15,25,35};

    //Assigning the base addresses of each array to one element of array of pointers x
    x[0] = a;
    x[1] = b;
    x[2] = c;

    /*
    Structure:
    x: 5000

    Element   Addresses  Value   Base address of array   Value of array       Addresses
    x[0]      5000       7000                   a       {1,2,3}            : (7000,7004,7008)
    x[1]      5008       7012                   b       {10,20,30}         : (7012,7016,7020)
    x[2]      5016       7024                   c       {15,25,35}         : (7024,7028,7032)

    */

    printf("Value of **ptr: %d\n", **ptr); //ptr points to the base address of array of pointers x
    //ptr refers to the address of the first element in thearray
    //*ptr refers to the value of the first element or the address stored in the first pointer
    //**ptr refers to the value at the address stored inside the first element of the pointer

    printf("Value of *(*(ptr+1)+2): %d\n", *(*(ptr+1)+2)); //Prints 30
    //*(ptr+1): ptr is a pointer to a pointer, it stores the base address of x which is an array of pointers
    //Adding 1 to the ptr skips 8 bytes (i.e, the size of each pointer according to the OS)
    //Assuming x or the base address of x to be 5000, to which ptr points to
    //ptr+1 means: 5000 + 1 * 8 = 5008
    //De-referencing ptr+1 or 5008th byte gives an integer pointer which stores the address 7012
    //Adding 2 to the integer pointer which points to 7012 gives the value 7020
    //De-referencing the 7020th byte, we get an integer value, which is 30

    //The above is a model for a 2D array with 3 rows and 3 columns
    //*(*(ptr+1)+2) is equivalent to ptr[1][2]

    //To explain:
    //We known *(ptr+1) is equivalent to ptr[1]
    //Therefore *(*(ptr+1)+2) becomes *(ptr[1] + 2)
    //Let ptr[1] be m
    //Therefore the expression becomes *(m+2)
    //Which is equivalent to m[2]
    //Since m = ptr[1]
    //The final expression is ptr[1][2]
    //Hence proved.

    //General formula for array[i][j] = *(*(array+i)+j)
    //This is how we access any element of a 2D array


    return 0;
}
