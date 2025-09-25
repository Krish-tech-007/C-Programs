#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Contains the general utility functions for string

int main()
{
    //The null character is not a part of the string, it is only there to mark the end of the string
    //The position of the null character is the length of the string
    char str[80];
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    int i = 0;
    printf("Sentence entered: ");
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    //OR
    /*
    for(i = 0; str[i]!='\0';i++);
    printf("\nThe length of the string: %d\n", i);

    */
    printf("\nLength of the string: %d\n", i);

    //Instead of writing the library function, we could also use the library function strlen
    //Syntax: strlen(name of the array);
    i = strlen(str);
    printf("Length of the string: %d\n", i);
    return 0;
}
