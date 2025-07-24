#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In order to represent characters in primary memory, we need to declare a variable of type char
    char ch = 'A';
    //Character constants are enclosed within ' ', i.e, single quotes
    printf("Character is %c\n", ch);

    char anotherCh;

    /*printf("Enter a character: ");
    scanf(" %c", &anotherCh);
    printf("You have typed: %c\n", anotherCh);*/

    //There's another function using which we can input a character
    //We can also use the getchar function

    printf("Enter another character: ");
    anotherCh = getchar(); //The function is going to take the character input and return the value which we are storing it inside a variable
    printf("You have entered %c\n", anotherCh);

    //Characters are represented as integer in primary memory
    //Each and every character has a predefined fixed and standard value, typically called ASCII (American Standard for Information Interchange) values

    printf("%d - %c\n", ch, ch); //Displays ASCII value of the character followed by the character itself separated by a -

    int i = 65;
    printf("%d - %c\n", i, i);

    //The ASCII value for 'A' is 65
    //The ASCII value for 'a' is 97
    //The difference between any letter in it's lower and upper case is always 32
    //If we need to convert into lowercase, we need to add 32 to it
    //If we need to convert into uppercase, we need to subtract 32 from it

    return 0;
}
