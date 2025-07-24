#include <stdio.h>
#include <stdlib.h>
/*void printMsg(){
    printf("Hello World!\n");
    printMsg();
}
Calls itself repeatedly
*/
void printMsg(unsigned int n){ //unsigned to ensure the value of n is positive
    if (n==0) //Recursion base condition, if true, control is going to return back to the caller, recursion is terminated
        return;
    else{
        printf("Hello World! (%d)\n", n);
        printMsg(--n);
    }


}
int main()
{
    //Stack is a type of data structure
    //It is used by the Operating System to handle the calling of the functions
    //Last in First out Principle

    //When a function is called from another function, then the Operating System preserves all the memory of the first function by pushing it in the stack followed by the function being called
    //Sometimes the stack is not required, for instance, when we call a function from the end of another function, therefore the information of the calling function need not be stored in the stack memory
    //It depends on the compiler

    //Recursion happens when a function calls itself
    //We need to have a condition to curb the recursion call otherwise it will keep calling itself for indefinite number of times
    //printMsg();
    //We will add a condition for termination as well as a parameter which can be supplied stating how many times it should run

    printMsg(3);
    return 0;
}
