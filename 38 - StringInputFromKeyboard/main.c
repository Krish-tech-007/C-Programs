#include <stdio.h>
#include <stdlib.h>

int main()
{
    //How to scan a string from the keyboard and then assign it to a character array that we would have declared
    char str[80];
    printf("Enter your name: ");
    scanf("%s", str); //Format specifier for string is %s
    //We do not send the address of the array in this case
    printf("Welcome, %s\n", str);

    //Drawback using scanf to take string input
    //It appends a null character to terminate the string as soon as it encounters a space/tab/return key in the input string

    //Therefore if we want to take input a string which has spaces
    //We can use the pattern matching feature in scanf
    printf("Enter another name: ");
    scanf(" %[ABCDEF]", str); //scanf function will match each character entered by the user, accepting only those matching the pattern supplied
    //As soon as it encounters a different character which is not mentioned in the pattern provided, it immediately adds the null character to terminate the string
    printf("String taken by pattern matching: %s\n", str);
    //For example, in this case,
    //If we enter DAVE
    //The output would only be DA as the scanf function adds a null character as soon as it encounters V
    scanf("%s"); //Flushing the buffer
    //Using the same pattern matching feature, we can now modify the scanf patterns to take all alphabets, both in lower case and upper case as well as space
    printf("Enter a sentence: ");
    scanf(" %[A-Za-z ]", str);
    printf("Sentence entered: %s\n", str);

    printf("Enter another sentence: ");
    scanf(" %[^\n]", str); //Accepts everything but a newline
    //^ represents any character of the keyboard
    //\n tells the scanf when to terminate
    //If it was scanf("%[^A]", str), then it would accept anything except A
    printf("Your sentence is: %s", str);
    return 0;
}
