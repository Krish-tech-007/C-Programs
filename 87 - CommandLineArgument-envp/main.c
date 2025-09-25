#include <stdio.h>
#include <stdlib.h>
//There is also a third argument in the main function
//The third parameter is called environmental parameter
//The Operating System passes some environmental information to our program through that parameter
//This information is useful in cases like systems programming
//If we need any some environmental information such as the login name, the terminal type or the path parameter information
//Then we can receive those through this third argument of main
int main(int argc, char **argv, char **envp) //envp is an array of character pointers just like argv
//Each environmental parameter is represented by a null terminated character array, i.e, a string
//The base address of each array is kept in each element of the envp
{
    printf("Content of the environmental parameter\n");
    int i;
    for(i=0; *(envp+i)!='\0';i++){
        printf("%s\n", *(envp+i));
    }
    return 0;
}
