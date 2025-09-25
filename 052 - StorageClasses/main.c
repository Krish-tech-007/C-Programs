#include <stdio.h>
#include <stdlib.h>

void test1(){
    auto int k;
    printf("Value of k: %d\n", k);
    k = 20;
    printf("Value of k: %d\n", k);
}

void test(){
    auto int var;
    printf("Value of var: %d\n", var);
    var++;
    printf("Value of var: %d\n", var);
}


int main()
{
    //Four different types of storage classes
    /*
    1. auto - Does not initialize the variable with any predefined value, garbage value. Scope is the block of code({}) in which it is defined, local scope. Lifetime is till the method
     is being executed in which it is declared, after which the variable is de-allocated.
    2.static
    3. extern
    4. register
    */
    //If not explicitly specified, auto is the default class
    //A storage class defines three things for a variable
    /*
    1. Scope of the variable - Defines the block from which the value of the variable is accessible, domain of accessibility
    2. Lifetime of the variable - Defines how long the variable is going to remain allocated in the primary memory
    3. Initial value of the variable - Defines the value that is assigned immediately after memory allocation
    */
    test1();
    test();
    //The OS creates a stack to manage local variables, the allocation of local variables is done in the stack part of the memory
    //After test1() is called, k is de-allocated, i.e, the OS starts to point an element above k in the stack but the value of k is kept in tact
    //Therefore, when test() is called, var is declared but not assigned, so the OS points an element below in the stack which was originally k but does not change it's value as no value is provided implicitly or explicitly
    return 0;
}
