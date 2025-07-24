#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strtok() function can be used to extract information from the string
    char source[] = "Andrea Freeman,30#5.9,300,2.7";
    char delims[] = ",#"; //delimiters

    char *token; //To store the base address of the tokens
    token = strtok(source, delims); //The first parameter is the source string from where we are going to be extracting the infromation
    //The source string needs to be supplied for the first time
    /*
    printf("Token: %s\n", token);
    //If the strtok fails to find a token separated by the delimiters, it returns NULL

    //To extract subsequent tokens
    token = strtok(NULL, delims);
    printf("Token: %s\n", token);
    */
    while(token!=NULL){
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }
    return 0;
}
