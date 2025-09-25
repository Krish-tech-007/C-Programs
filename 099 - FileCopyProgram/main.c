#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLOCK_SIZE 4096

int main(int argc, char **argv){
    if(argc!=3){
        printf("Invalid number of parameters.\n");
        exit(1);
    }

    FILE *source;
    source = fopen(*(argv+1), "rb");
    if(NULL==source){
        printf("Failed to open file \"%s\", make sure that the file exists.\n", *(argv+1));
        exit(1);
    }

    FILE* destination;
    destination = fopen(*(argv+2), "wb");
    if(NULL==destination){
        printf("Failed to open file \"%s\", make sure that the file exists.\n", *(argv+1));
        exit(1);
    }

    //We will be using a buffer that is dynamically created
    //It will hold temporarily the data copied from the source file till it is copied into the destination file
    //The size of the buffer will be 4kb or 4096 bytes
    //As OS reads and write in one block of size
    //And the size of the block is usually 4kb
    fseek(source, 0L, SEEK_END);
    long rem_size = ftell(source);
    fseek(source, 0L, SEEK_SET);

    char *buffer = (char *)malloc(BLOCK_SIZE);
    if(NULL==buffer){
        printf("Failed to allocate buffer.\n");
        exit(1);
    }
    //We should not allocate the buffer size to be equal to the size of the source file
    //This is because if the source file is huge, then the OS may fail to allocate sufficient memory for the buffer

    while(rem_size>0){
        long read_bytes = 0; //Stores the number of bytes read by fread() function
        if(rem_size<BLOCK_SIZE){
            read_bytes = fread((void*)buffer, sizeof(char), rem_size, source);
        }
        else{
            read_bytes = fread((void*)buffer, sizeof(char), BLOCK_SIZE, source);
        }

    fwrite((void*)buffer, sizeof(char), read_bytes, destination); //Writing the bytes we read earlier
    rem_size -= read_bytes;
    }

    printf("File Copied.\n");


    fclose(source);
    fclose(destination);
    free(buffer);

    return 0;
}

/*
Alternate program.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    if(argc!=3){
        printf("Invalid number of parameters.\n");
        exit(1);
    }

    FILE *source;
    source = fopen(*(argv+1), "rb");
    if(NULL==source){
        printf("Failed to open file \"%s\", make sure that the file exists.\n", *(argv+1));
        exit(1);
    }

    FILE* destination;
    destination = fopen(*(argv+2), "wb");
    if(NULL==destination){
        printf("Failed to open file \"%s\", make sure that the file exists.\n", *(argv+1));
        exit(1);
    }

    fseek(source, 0L, SEEK_END);
    long size = ftell(source);
    fseek(source, 0L, SEEK_SET);

    char *buffer = (char *)malloc(size*sizeof(char));
    if(NULL==buffer){
        printf("Failed to allocate buffer.\n");
        exit(1);
    }

    fread((void*)buffer, sizeof(char), size, source);
    fwrite((void*)buffer, sizeof(char), size, destination);


    printf("File Copied.\n");


    fclose(source);
    fclose(destination);
    free(buffer);

    return 0;
}
*/



