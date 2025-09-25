#include <stdio.h> //It contains the declarations or the prototype declarations of all the library functions that involves any standard input/output operations
//The compiler does not contain the language library, it only contains the keywords
//The language library is supplied with the compiler but it is not a part of the compiler itself
//Without stdio.h header file, we won't we able to use the printf function
#include <stdlib.h>

float simpleInterest(float, float, float); //Function prototype declaration
//Syntax: returnType nameOfFunction(type of parameters);
//When we are calling a function, it is better to make sure that the prototype of the function is available to the compiler
int main()
{
    //Functions are modular, reusable and reduce code
    //Functions help reduce complexity, cut down on development time, updation of program easily, tracking bug.
    //Functions that come with the language library are known as standard functions
    //Library functions are for general purpose

    //We can also write our own functions best suited to our specific requirements which will be known as user defined functions

    //User defined function:
    //A function name should be unique
    //A function may need some input to work upon
    //A function may need to return some value back to called upon completion of task

    //Example:
    //A function that computes simple interest on being supplied principal amount, duration and rate of interest, and it returns the interest to the caller

    float amt, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &amt);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter duration: ");
    scanf("%f", &time);

    float interest = simpleInterest(amt, rate, time);
    printf("Interest: %.2f\n", interest);

    //We can call a function as many times as we need
    return 0;
}

//If the function is defined after the calling method, then it gives an error
//In order to solve this, we can declare the function before calling it


//The function definition is the return type, the name of the function, parameters and the body of the function
float simpleInterest(float amt, float rate, float time){ //If the function does not return anything, then the type of the function should be void or the corresponding data type of the return value
    return (amt*rate*time)/100.00;
}
