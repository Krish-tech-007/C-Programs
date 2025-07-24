#include <stdio.h>
#include <stdlib.h>
//There are two types of variables:
//One whose life is equal to the life of the function they are in, eg: auto variables
//Another whose life is equal to the life of the program, eg: global or static variables
//There are also other allocations that are not dependent on the life of the function, i.e, the memory that we allocate dynamically during runtime
//The memory dynamically allocated during runtime will remain allocated as long as the programmer wants it to be

//The RAM is divided into two portions:
//Stack: The portion of RAM that deals with those variables that have the life equivalent to the life of the function and get de-allocated once it ends
//Heap: The portion of RAM that deals with those variables that have life equivalent to the life of the program/programmer's wish through dynamic allocation using malloc or calloc or static allocation or global allocation

void funB(){
    int a,b;
}
void funA(){
    int p,q;
    funB();
}
int main()
{
    int x;
    funA();
    return 0;
}

/*In the stack:
First 4 bytes will be allocated for variable x
Then 4 bytes will be allocated for variables p and q each
Then 4 bytes will be allocated for variables a and b each
Then once the function funB() ends, the variables a and b would be deallocated as the control returns to the calling function funA()
Once function funA() ends, the variables p and q would be deallocated as the function returns to the calling function main()
Once the main function ends as well, the variable q would be deallocated and the top would be taken back to it's initial position where it was before
*/

//Thus we cannot have allocation for variables whose life is independent of the life of function in between the allocations for variables whose life depends upon the life of the function
//This is because, the movement of the top may de-allocate the variable whose life does not depend upon the function as well
//As a result, a separate area in the primary memory (RAM) was created known as the heap area
