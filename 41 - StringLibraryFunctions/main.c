#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[80] = "Hello World";
    char second[80];

    //In order to copy one string to another, we can use strcpy() function
    //Syntax: strcpy(destination string, source string)
    strcpy(second, first);
    printf("Content of the second array: %s\n", second);

    //String concatenation function using the function strcat()
    strcpy(first, "Hello");
    strcpy(second, "World.");

    strcat(first, second); //Both first and second arrays would be merged and the concatenated string would be stored in the first character array
    printf("Merged string: %s\n", first);
    //The strcat() function does not append any space in between, therefore in order to add space in between
    //We need to merge the first string with a space, then merge the first string again with the second string
    strcpy(first, "Hello");
    strcat(first, " ");
    strcat(first, second);
    printf("Merged string with spaces: %s\n", first);

    //In order to compare two strings, we use the strcmp() function
    //We do not use the relational operators as they can compare only numeric values
    //For comparing strings, we use the lexicographical analysis, i.e, the way the dictionary is written
    int i;
    i = strcmp("abc", "abc");
    //If both strings are equal, strcmp returns 0
    //If the first string comes first in the dictionary, the function would return a negative value
    //If the first string comes second in the dictionary, the function would return a positive value

    strcpy(first, "cat");
    strcpy(second, "zebra");
    i = strcmp(first, second);
    if (i==0)
        printf("Both strings are equal\n");
    else if(i>0)
        printf("Second string would come first in the dictionary\n");
    else
        printf("First string would come first in the dictionary\n");

    return 0;
}
