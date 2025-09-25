#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Prototype declarations
bool isLowerCase(char);
bool isUpperCase(char);
char toLowerCase(char);
char toUpperCase(char);


int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(isUpperCase(ch))
        printf("Upper Case\n");
    else if(isLowerCase(ch))
        printf("Lower Case\n");

    printf("Lower case: %c\n", toLowerCase(ch));
    printf("Upper case: %c\n", toUpperCase(ch));
    return 0;
}

bool isLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return true;
    else
        return false;
}

bool isUpperCase(char ch){
    if(ch>='A'&& ch<='Z')
        return true;
    else
        return false;
}

char toLowerCase(char ch){
    if(isUpperCase(ch))
        return ch+32;
    else
        return ch;
}

char toUpperCase(char ch){
    if(isLowerCase(ch))
        return ch-32;
    else
        return ch;
}
