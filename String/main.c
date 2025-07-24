#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Contains string related functions like strcpy()

int main()
{
    //In C we do not have a datatype to represent string
    //Instead we use a 1D character array in order to hold the string in primary memory
    char str[] = "Hello World"; //To mark the end of the string, the compiler automatically assigns a null character at the end of the string
    //If we are assigning a string literal to a character array of unspecified size, then the size of the array would be length of the string + 1
    //+1 to store the null character at the end
    //If we declare a character array and then try to initialize with a string literal on another statement, then it is considered an illegal expression
    //This is because array name in C is a constant type and we cannot make array name target of any assignment.

    //However if we want to assign the value of the string literal to a character array after declaring it, then we would have to use the strcpy() function
    //Example as below:
    char str2[80];
    strcpy(str2, "How are you?");
    //Syntax: strcpy(array name, String literal to be assigned to the array);
    printf("String is %s\n", str); //Format specifier for string type is %s
    printf("Another string is %s\n", str2);

    //Another example of strcpy
    char str3[] = "Hello Everyone!";
    strcpy(str2, str3); //Copies the content of str3 into str2
    printf("New value of str2 is: %s\n", str2);

    char str4[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //We can also declare and initialize like this
    //In this case, we need to manually assign the null character at the end

    return 0;
}
