#include <stdio.h>
#include <stdlib.h>

//int gVar; //A global variable is a variable that is defined outside of any method
//Thus is has global scope, visible from anywhere and accessed from anywhere
//The life of the global variable is equal to the life of the program
//The global memory is allocated memory right as the program starts to be executed, implicitly initialized with 0

void test(){
    extern int gVar; //extern keyword provides hint to the compiler that we are using a global variable declared anywhere inside the program, may be declared later on as well, after the function uses it
    printf("Value of gVar: %d\n", gVar);
    gVar = 20;
}

//We know a global variable can be declared anywhere in the global scope
//If we declare the gVar variable here, it would give us a compilation error at line 10 and 11
//Happens as the gVar variable is declared after it's usage
//This is because the compiler starts compiling at the very first line
//Thus in cases like these, we must tell the compiler that we are making use of a global variable declared anywhere in the program
//int gVar;
int main()
{
    extern int gVar;
    printf("Value of gVar: %d\n", gVar);
    gVar = 10;
    test();
    printf("Value of gVar: %d\n", gVar);
    return 0;
}

//Similarly, if we were to declare the global variable here, we would need to provide hints to the compiler that the gVar is a global variable and we may be declared externally
int gVar;
//Therefore it is a good practice to declare the global variable with the extern keyword inside a method in which it is being used irrespective of the fact where it may be declared
