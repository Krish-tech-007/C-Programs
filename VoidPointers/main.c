#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Generic pointer is declared with the keyword void
    void *voidPtr; //The void pointer can be used to store the address of any type of variable including int, float, user-defined type, etc.
    //A void pointer cannot be de-referenced unless casted
    //Address arithmetic cannot be done on void pointers
    //Void pointers can only be used for keeping addresses
    //If we want to de-refer a void pointer, we must cast it to the appropriate datatype

    int x = 100;
    voidPtr = &x;
    //*vptr = 191; will give an error
    *( (int*) voidPtr ) = 191; //If we de-reference after type casting, then it's fine
    // The void pointer 'ptr' is cast to an integer pointer using '(int*)ptr'
    // Then, the value is dereferenced with `*(int*)ptr` to get the integer value at that memory location
    printf("Value of x: %d\n", x);

    return 0;
}
