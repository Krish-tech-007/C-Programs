#include <stdio.h>
#include <stdlib.h>

void printNoToOne(unsigned int n){
    if (n==0)
        return; //When this return statement is encountered, in order to decide where the control should return to
        //The OS will look at the stack to determine the function to which the control should be transferred to
        //In this case, the control would be transferred back to the function calling it originally
        //Thus, the main function is deleted from the stack as well when it gets back the control
    else{
        printf("%d\n", n);
        printNoToOne(--n); //The recursive call is the last statement of the function, hence it won't get pushed into the stack as we have nothing more left to do
        //Hence the OS has nothing to store in the stack
        //In functions, where the recursive call is made as the last statement of the function, this is known as tail recursion
        //There will be no stacking activity for the recursive call

        //If we can do something by tail recursion and using iteration, then both are equivalent
        //Thus we can use either of them in this case scenario
    }
}
void printOneToNo(unsigned int n){
    if(n==0)
        return;
    else{
        printOneToNo(n - 1); //Here recursive call is not the last statement, hence this is not a case of tail recrusion
        printf("%d\n",n); //Since the value of n will be needed later, it needs to be preserved, hence it is pushed onto the stack
    }
//If we wrote a loop instead of this function, then there won't be any stacking activity, hence in this case, looping or iteration is better
//If we can solve a problem using non tail recursion as well as a loop, the loop is usually preferred as iteration does not require any stacking overheads
//However in some cases, where we explicitly require the stacking mechanism, we use a non tail loop
}
void decToBin(unsigned int n){
    if(n==0){
        return;
    }
    else{
        decToBin(n/2);
        printf("%d", n%2);
    }
} //We are using the operating system's built in stack to store the binary equivalent of a decimal number instead of manually writing a stack ourselves
  //When we need to use a stack to preserve data, we use non tail recursion
int main()
{
    //printNoToOne(5);
    //printOneToNo(5);
    decToBin(0);
    return 0;
}
