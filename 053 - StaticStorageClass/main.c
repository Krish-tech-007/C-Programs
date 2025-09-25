#include <stdio.h>
#include <stdlib.h>
//Whenever we declare a static variable, the life of the variable is equal to the life of the program
//The variable when declared static is allocated memory as soon as the program begins and will remain allocated throughout the program and will be de-allocated when the program ends
//static variables are always implicitly initialized with 0
//Scope of static variables is local, i.e, in the block of code in which it is defined. Similar to that of auto type variable.
void test1(){
    auto int k;
    printf("Value of k: %d\n", k);
    k = 20;
    printf("Value of k: %d\n", k);
}
void test(){
    static int var;
    printf("Value of var: %d\n", var);
    var++;
    printf("value of var: %d\n", var);
}
int main()
{
    //test1();
    test(); //Since var is a static variable, it is not de-allocated after the method execution ends
    test(); //If we call the test() function again, it will show that the value of the variable var is retained
    //Used if we want to retain the value of a variable in a function
    //(Could it perhaps be used for recursion?)
    test();

    return 0;
}
