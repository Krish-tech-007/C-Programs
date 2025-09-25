#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //Contains all the necessary functionalities that we can use to parse and fetch the values from variable argument list
//Passing variable arguments to functions
//There may be need to pass a variable amount of arguments to a function as opposed to a fixed number of parameters
//Example: printf can work with any number of arguments
//printf("%d %d %d %c\n", 10,20,30, 'K');
//In this case, printf function is receiving 4 arguments
//First is a character pointer containing some string message and format information about the value it needs to be printed which is fixed
//It is possible to write a function in C that can receive any number of arguments

/*
The below function could only receive 2 arguments
int sum(int a, int b){
    return a + b;
}
Let us modify it in such a way that allows us to receive any number of arguments
*/
//A variadic function takes at least one fixed argument an ellipsis(…) as the last parameter.
int sum(int count, ...){ //Count is the number of variable arguments, the sum function is going to receive and ... is called ellipsis
    //The variable arguments are going to be captured in ellipsis
    //In this case we assume all the values going to be passed to the function are going to be of integer type
    int s = 0;
    //In order to fetch the variable argument list, we need to declare an object of type va_list whch is declared under stdarg.h
    va_list ap; //Usually the name given is ap, but we can give it any name we like
    //We need to create this va_list with the values of variable arguments passed under ellipsis to the function
    //For that purpose, we have the function va_start() that takes two values, the list itself and then the last fixed argument after which variable argument starts
    //This will create the variable argument list ap dynamically
    va_start(ap, count);

    //Now we can iterate through the list and fetch the values
    int i;
    for(i = 1; i<=count; i++){
        //In order to fetch values from va_start, we need to use the function va_arg() whose first parameter is the list and second is the type information
        s += va_arg(ap, int);
    }
    //Once we come out of the loop, we also need to de-allocate the list ourself
    //This is done using the function va_end() which takes the name of the list used as parameter
    va_end(ap);
    return s;
}
int main()
{
    int k;
    k = sum(5, 10,20,30,40, 10);
    printf("Sum is: %d\n", k);
    return 0;
}
