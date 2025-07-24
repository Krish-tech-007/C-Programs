#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Blah Blah, Hello World!!";
    memset(str, '@', 4);
    memset(str+5, '@', 4);
    //First parameter is the address from where we want to start changing
    //Second parameter is the character by which we want to replace
    //Third parameter is the number of characters to be replaced
    printf("Updated string: %s\n", str);

    char *ptr = (char *)malloc(sizeof(char)*20);
    memset(ptr, '\0', 20);
    memset(ptr, '-', 19);
    printf("%s\n", ptr);

    return 0;
}
