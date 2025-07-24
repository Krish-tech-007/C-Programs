#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/file.txt","r"); //Opened the file in read text mode(exclusive)
    //When we open our file in an exclusive mode, the FILE pointer always points to the first location of the file
    if(fp==NULL){
        printf("Failed to open file. Terminating the program.\n");
        exit(1);
    }
    //In order to read a single character from the file, we can make use of the fgetc() function
    //The fgetc() takes a single parameter which is the FILE pointer
    //fgetc() reads a single character at the specified pointer location and returns the character
    //After reading the character it also forwards the FILE pointer to the next readable location always
    char ch;
    ch = fgetc(fp); //This is called prime reading

    //While reading from the file, we need to constantly check whether we have reached the end of file or not
    //In order to check whether we have reached the end of the file, we have the function feof()
    //The feof() function receives a single parameter which is the FILE pointer
    //It returns true if the end of the file is encountered

    //On reading the first character, it may be so that the file is empty
    //In that case, we need to terminate the iteration
    //Else we continue iterating till we reach the end of the file
    //Loop should iterate as long as there is content in the file

    while(!feof(fp)){
        printf("%c", ch); //Prints the character returned by fgetc()
        ch = fgetc(fp);
    }

    //Try to read the first character of the file
    //Determine if it was successful
    //If successful, iterate till not successful and keep printing
    //If not successful, terminate the loop

    //This is called the prime reading technique of reading files

    fclose(fp);
    return 0;
}
