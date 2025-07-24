/*
Header fies are used to provide information to the compiler about unknown identifiers in the program
*/
//Anything that starts with # is considered as an instruction to the compiler
//These are called as pre-processor directives
//It copies and pastes the relevant data and bundles it with the source code and then proceeds to compilation
#include <stdio.h> //Standard input output operations
#include <stdlib.h> //h stands for header
//Example: math.h for math related functions

int main() //We cannot have multiple main functions in a single file
{
    printf("Hello world!\n"); //printf is a library function being used to display the parameters supplied to it
    //Declaration of the printf function is required to compile it and it's declaration is inside the header file
    return (EXIT_SUCCESS); //EXIT_SUCCESS is a macro, and it's value is defined in the stdlib header and it's value substituted by the compiler
    //We could have also written: return 0; and removed the subsequent declaration
}

/*We write programs by breaking it down into modules
Modules are called function in C programming
If the program contains more than one function then the operating system needs to know the starting point of the program
Here main function is considered as the starting point of any C program
*/

/*Execution takes place from main
  Compilation takes place from the first line of code

  Compiler does not compile anything that is unknown to it
  Compiler only contains the keywords (reserved words) and the various operators
*/

//The operating system runs our program
//Compiler compiles the source code to the object code
//Operating system understands the object code
//We can execute the object code as many times as we want to


/*
Running using Command Line Interface
1. Write code in notepad and save it with extension .c
2. Use cd / to go to the base
3. Use cd (address of program) to change directory
(Use dir to list the files in the folder)
(dir *.c lists all files with .c extension in that directory)
4. gcc -o hello.exe hello.c (Here hello.exe is the name of the output file)
5. hello (Just type the name of the output file and we will get the output)
*/
