#include <stdio.h>

int main()
{
    //We may encounter a typical problem while dealing with characters
    char ch;
    int i, j;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Enter a character: ");
    //scanf("%c", &ch); //Skips this scanf statement
    //This is because when we enter the first number, we also press the enter key in order to terminate our input
    //The integer value gets assigned to the integer variable however the \n is also taken by the system and is inside the input buffer.
    //The standard input buffer is that part of memory that is going to hold the next input value from the keyboard
    //So when the second scanf comes it is expecting a character from the keyboard and hence receives the \n as input which is already present in the standard input buffer
    //If we were to print the ASCII value of the character, it would be the ASCII value of the return statement which is 10
    //It therefore appears to skip this statement because it already getting it's value from the input buffer
    //So it's not holding at it's place
    //Therefore to solve this, we need to clear the standard input buffer before taking a character using scanf
    //We need to put a space before %c

    scanf(" %c", &ch);

    printf("Enter a number: ");
    scanf("%d", &j);

    printf("The ASCII value of the character is: %d",ch);
}
