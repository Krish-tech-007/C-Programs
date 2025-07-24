#include <stdio.h>
#include <stdlib.h>
//When a program is executed, each of the function in the program is loaded into the primary memory or RAM
//Execution of the program is managed entirely by the Operating System
//The Operating system maintain a record of functions and the locations in the primary memory where they are loaded
//All the instructions are loaded into the RAM, starting from the location allocated for the function
//The name of the function contains the address of the function in the primary memory

void printMessage(){
    printf("Hello world!\n");
}
void anotherFunction(){
    printf("It's interesting\n");
}
int sum(int a, int b){
    return a+b;
}
int main()
{
    printf("Address of the main function: %p\n", main); //%p is for pointers
    printf("Address of the printMessage function: %p\n", printMessage);

    //Name of any function holds the address of the function in runtime
    //We can declare a function pointer to store that address

    //Benefit of using function pointers:
    //Using a function pointer, we can make a call to the function
    //There may be situations where the name of the function is not available in the context

    void(* ptr)();//(*ptr), the asterisk symbol as well as the name of the pointer has to be in a bracket otherwise it would be an integer pointer
    //Means ptr is a function pointer that is capable of holding the address of all such functions that return void and receives nothing as parameters
    //Syntax: return_type (*ptr_name)(parameter_types...);
    ptr = printMessage; //Function pointer ptr stores the address of the function printMessage
    //We can call the printMessage() function using ptr
    //Thus we are calling the function without using it's name
    ptr();
    ptr = anotherFunction; //Since anotherFunction() is also a void function that receives no parameters, it can be stored by ptr
    //Similarly we can also call the anotherFunction() using ptr
    ptr();

    int(* ptr2)(int, int); //ptr2 is capable of storing the address of any function that returns int and takes two int parameters
    ptr2 = sum;
    int s = ptr2(10,100);
    printf("Sum is: %d\n", s);


    return 0;
}
