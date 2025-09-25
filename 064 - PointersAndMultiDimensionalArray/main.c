#include <stdio.h>
#include <stdlib.h>

int main()
{
    //We have learned that for 1D arrays, the name of the array is a constant pointer
    //Further, array[i] is also equivalent to *(array+i)

    int B[2][3] = {{1,2,3},{4,5,6}}; //We are creating an array of arrays
    //We are creating 2 one dimensional arrays each of size 3
    //B[0] and B[1] are both one dimensional arrays of size 3
    //Thus B[0] and B[1] are each name of one dimensional array of size 3
    //Thus B[0] and B[1] also become a pointer to the first element in their own arrays

    //The memory structure would look somewhat like this
    //     B[0]        B[1]
    //[           ][            ]
    //4000          4012

    //Name of an array returns a pointer to the first element of the array
    //In this case, the elements of this array are also arrays
    //Therefore the name of a 2D array is a pointer to pointer

    //B is a pointer to it's first element
    //Since the first element is an array
    //B is a pointer to another pointer
    //B basically points to the first element which is an array which points to it's own first element

    //B[0] is the name of a 1D array of size 3
    //Since we know the name of an array is a pointer to the first element
    //We can conclude that B[0] is a pointer to the address of it's first element
    //B is the name of a 1D array of size 2
    //B will point to the address of it's first element, i.e, B[0]
    //But we have already established B[0] is a pointer to the address of it's first element
    //So effectively B is a pointer that points to B[0] but B[0] is also a pointer
    //Only a pointer to a pointer can point to a pointer that points to some value
    //Therefore B has to be a pointer to a pointer

    printf("B: %lu\n", B); //B is the name of the 2D array
    //Name of an array is a pointer to the address of the 1st element
    //Value of a pointer is the address that it stores
    //In this case B stores the address of it's 1st element
    printf("&B[0]: %lu\n", &B[0]);
    printf("*B: %lu\n", *B); //B stores the address of B[0], so *B gives the value of B[0]
    //B[0] is an one dimensional array of size 3
    //Since B[0] is the name of an array, it is also a pointer to it's first element
    //B[0] stores the address of it's first element
    //Hence the address of B[0][0] is displayed
    printf("B[0]: %lu\n", B[0]); //B[0] is the name of an array, so it is a pointer that stores the address of it's first element
    //Hence the address of B[0][0] is displayed here
    printf("&B[0][0]: %lu\n\n", &B[0][0]);

    //To demonstrate and clarify some concepts further

    //We have created an integer variable x
    //We then assign it's address to an integer pointer variable named ptr
    //Summary: ptr(int*) points to x(int)
    //We then assign the address of the integer pointer variable named ptr to another integer pointer variable named ptr2
    //Summary: ptr2(int*) points to ptr(int*), which points to x(int)
    //Effectively, ptr2 holds the address of another pointer variable
    //Even though we can still store the address of another pointer variable inside a pointer variable with a warning from the compiler
    //We cannot use it to access the value stored inside the pointer whose address we store
    //The issue arises when we try to de-reference the pointer variable ptr to obtain the value of x
    //ptr2 points to ptr, but ptr1 points to x
    //If ptr2 is only a pointer type variable, it can only be de-referenced once to obtain the value of ptr which is nothing but the address of x
    //ptr2 cannot be de-referenced twice
    //If we wanted to access x through ptr2, we should have declared it as a pointer to pointer
    //So that we could access the value which a pointer points to from another pointer that points to itself

    /*
    int x = 101;
    int *ptr = &x; //ptr is a pointer variable which holds the address of variable x
    int *ptr2 = &ptr; //otr1 is a pointer variable that holds the address of another pointer variable ptr

    printf("Value of x: %d\n", x);
    printf("Value of *ptr: %d\n", *ptr);
    printf("Value of **ptr2: %d\n", **ptr2); //This line gives error
    printf("Address of x: %d\n\n", &x);
    */


    printf("B+1: %lu\n", B+1);
    //B is a pointer to an array of arrays
    //So when incremented by 1, it skips to the next array
    //Which is B[1], or the second element of B[1]

    //Effectively:
    //B is a 1D array of two pointers
    //Each pointer points to the base address of another 1D array of three integer elements
     printf("&B[1]: %lu\n", &B[1]);
     printf("*(B+1): %lu\n\n", *(B+1));
     //B is the address of the first pointer in the array
     //B+1 is the address of the second pointer in the array
     //*(B+1) is the value at address of the second pointer, which is the address of the first element of the second array

     printf("*(B+1)+2: %lu\n\n", *(B+1)+2);
     //B+1 is the address of the second pointer in the array
     //*(B+1) is the value of that pointer or the address of the first element of the second array
     //*(B+1)+2 is the address of the third element of the second array
     //Equivalent to B[1]+2 and &B[1][2]

     printf("*(*B+1): %lu\n", *(*B+1));
     //B is the address of the first pointer
     //*B is the value at the address of the first pointer, which is the first pointer
     //The first pointer stores the address of the first element of the 1D array
     //*B+1 is the address of B[0][1]
     //De-referencing it would give us the value of B[0][1]

     //Analysis:
     //B is an integer pointer to a 1D array of size 3. B -> (int*) [3]
     //*B -> [3]
     //*B is an integer pointer to the first element of the array.
     //*B + 1 -> points to the second element of that array
     //*(*B+1) -> second element of the array

     printf("B[0][1]: %lu\n", B[0][1]);

     //General formula: B[i][j] = *(B[i]+j) = *(*(B+i)+j)

     //Pointers and multi-dimensional array
     //Array is a collection of similar things or similar objects
     //Multi-dimensional arrays are basically array of arrays


    return 0;
}
