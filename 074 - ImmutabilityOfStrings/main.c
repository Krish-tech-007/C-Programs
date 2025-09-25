#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring a constant string and assigning it to a character pointer

    char *str = "Hello"; //"Hello" is a constant string
    //We are assigning the base address of the string to the character pointer str
    //When we declare a constant string, the compiler takes the responsibility to allocate the character array in the memory

    //We can access a constant string but we cannot modify it
    //We can access the character array but we cannot modify it in the case of constant strings
    //Therefore the content of the string is immutable or final
    //This is because we cannot change any element of the character array that represents the constant string

    printf("The string is: %s\n\n", str);

    //If we try to change any element of a character array that represents a constant string, then it will give us a runtime error
    //*(str+1) = 'O'; This cannot be done
    //printf("The string is: %s\n\n", str);

    //This probably happens because the value being de-referenced by the pointer is a constant value instead of a variable

    //My own experiment
    char string[] = "HELLO WORLD!";
    char *ptr = string;
    printf("Original string is: %s\n", ptr);
    printf("Address of pointer: %lu\n", ptr);
    printf("Address of string array: %lu\n", string);

    *(ptr+11) = '.';
    printf("\nThe modified string is: %s\n", ptr);
    printf("Address of pointer: %lu\n", ptr);
    printf("Address of string array: %lu\n\n", string);

    *(string+11) = '!';
    printf("The modified string is: %s\n", string);
    printf("Address of string array: %lu\n", string);

    //string++; We cannot do this.
    //This is because when we declare an array, the name of the array is a constant pointer to the base address of the array
    return 0;
}
