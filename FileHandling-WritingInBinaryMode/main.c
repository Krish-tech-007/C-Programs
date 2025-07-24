#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/data.bin", "wb");
    //We can have any extension, .bin is not necessary
    if(NULL==fp){
        printf("Failed to open file.\n");
        exit(1);
    }
    double data[] = {1.1,2.2,3.3,4.4,5.5};
    //In order to write data into a binary file, we have the function fwrite()
    //It requires four parameters
    //First one is the address of the object we want to write here, in this case, the base address of the array. It needs to be casted as a void pointer because the function only accepts void pointer.
    //Second is the size of each element that we intend to write in the binary file
    //Third is the number of elements we want to write
    //Fourth is the FILE *ptr pointing to the address of the file in which the data is to be written
    //Only successful completion, fwrite() function returns the number of elements it writes into the file

    int nObject = fwrite((void*)data, sizeof(double), 5, fp);
    //If we only wanted to print the second and third element of the array
    //Then the function call would like fwrite((void*)(data+1), sizeof(double), 2, fp);

    printf("Total elements written: %d\n", nObject);

    //The size of the bin file would be equal to the size of the data in it
    //In this case, we are storing 5 double elements in the bin file
    //Since each double element takes 8 bytes of memory
    //5 elements would occupy 40 bytes
    //Which is equal to the total size of the file

    //If we open the binary file in some text editor, we won't be able to read it
    //This is because any text editor is going to interpret each byte as information
    //However in this case, each 8 byte is a complete information
    //In order to be able to read a binary file, we can write our own program


    fclose(fp);
    return 0;
}
