#include <stdio.h>
#include <stdlib.h>
//So far we have read all data from the keyboard and output in the console
//We may also need to input data from a file and save data in a file so that the data can be preserved
//If we store data in data structures such as arrays, since they are stored in primary memory as soon as program ends, they are de-allocated and data lost

//We will deal with two types of files - text file and binary file
int main()
{
    //To work with files, we need a FILE pointer
    FILE *fp;
    //FILE is a structure type that is declared in the stdio.h header file
    //The pointer will hold the address of the FILE object corresponding to the file with which we are supposed to interact
    //Program: Writing some characters in a text file

    //Next step is to open the file using fopen() function
    fp = fopen("C:/Users/User/Documents/C Programs/file.txt", "w");
    /*
    "C:\Users\My Name\Desktop\test\input.txt"
    The backslash (\) is a special character. You must escape it:
    "C:\\Users\\My Name\\Desktop\\test\\input.txt".
    EDIT: Alternately, use forward slashes (/). Windows doesn't care
*/
    //fopen() is a library function which requires two parameters - name of the file, mode of operation
    //If we provide the name of the file only, it looks in the current directory
    //If the file is located elsewhere, we need to provide an absolute path
    //If we want to write in text mode, the mode of operation should be w
    //If we want to write in binary mode, the mode of operation should be wb
    //If we want to open a particular file in write mode and it does not exist at the location, then the file will always be created by the fopen() function
    //If the file exists, then the existing content of the file would be lost in writing mode
    //If we want to open the file in read mode, then the mode of operation should be r
    //If we want to open the file in read binary mode, then the mode of operation should be rb
    //If the file does not exist in this case, NULL would be returned
    //If the file exists, only then the FILE object would be created and it's address returned to the FILE pointer
    //If we want to open the file in append mode, then the mode of operation should be a
    //If we want to open the file in append binary mode, then the mode of operation should be ab
    //If the file does not exist, the file would be created in the case of append mode
    //If the file exists, then new content will be appended from the current end of file location
    //Meaning, we can add new content to existing content without overwriting it

    //If fopen() can open the file successfully, it returns the address of the FILE Object corresponding to the file that we specify as parameter
    //If fopen() fails, it returns NULL, such as in cases when the location provided is not valid
    if(fp==NULL){
        printf("Failed to open file. Terminating the program.\n");
        exit(1);
    }

    //If the control reaches here, the file has been opened successfully
    fputc('K', fp); //fputc() function is declared under the stdio.h header file
    //fputc() function is used to write a single character to the file
    //It's first parameter is the character we intend to write and the second parameter is the file pointer where we want to write
    //fuputc() function will write the character in the file pointed by the pointer
    //Not only does fputc() writes the character at the file pointer location, but it also forwards the file pointer to the next writable location
    //If we call the fputc() function again, it will write a character at the next location
    fputc('S', fp);
    //In this case, two characters are going to be written in the file

    //After all operations regarding file have been completed, at the end, we also need to close the file
    //File is closed using the fclose() function
    //It takes the file pointer as it's parameter
    fputc('\n', fp);
    /*
    int i;
    for(i = 0;i<26;i++){
        fputc(((char)(65+i)), fp);
    }
    */
    //Alternate approach
    char ch;
    for(ch='A'; ch<='Z';ch++){
        fputc(ch, fp);
    }

    fclose(fp);
    //fclose() function closes the dynamic FILE object
    //It is also going to flush the content into the file
    //This ensures all content is written in the file perfectly and the file is saved properly
    printf("Success\n");
    return 0;
}
/*
             Modes of file operations
                ------------------------
     Exclusive
                TEXT            BINARY
     WRITE      "w"             "wb"
     READ       "r"             "rb"
     APPEND     "a"             "ab"

     Multiple

     WRITE      "w+"             "wb+" or "w+b"
     READ       "r+"             "rb+" or "r+b"
     APPEND     "a+"             "ab+" or "a+b"

*/

//If we open in exclusive mode, we cannot do anything else
//For example, if we open a text file in write mode, then we cannot read it or append to it
//If we open in multiple, then we can perform multiple operations
//For example, if we want to read and write to a file simultaneously
