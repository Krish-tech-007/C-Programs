#include <stdio.h>
#include <stdlib.h>
//Contents of data.bin: <BOF> 1.1, 2.2, 3.3, 4.4, 5.5 <EOF>
int main()
{
    //Program: Reading a specific value from the binary file instead of reading the whole file
    //To achieve this, we need to move the FILE pointer to the desired location from where the reading should begin
    //Initially, when the file is open, the FILE pointer is placed at the Beginning Of the FILE
    //We can move the FILE pointer to anywhere in the file using the function fseek()
    //The fseek() function requires three parameters
    //The first is the FILE pointer that we want to move
    //The second is the number of bytes we need to move
    //In this case, we need to skip 16 bytes as we need to skip two double values in order to read the third
    //We can move in two directions, either from the beginning of the file or the end of the file
    //If the value supplied as the second parameter is positive, then the direction considered is beginning of the file to the end of the file
    //If the value supplied as the second parameter is negative, then the direction considered is end of the file to the beginning of the file
    //If we consider end of file to beginning of file, and if we want to access the second value
    //Then the second parameter should be equal to 3*8 = -24 bytes
    //Third is offset parameter that supplies one of the three specific positions within the file from which we want the movement of the FILE pointer
    //0 indicates from beginning of file, it is represented by the enumerated constant SEEK_SET
    //1 indicates current position, it is represented by the enumerated constant SEEK_CUR
    //2 indicates end of file, it is represented by the enumerated constant SEEK_END


    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/data.bin", "rb");
    if(NULL==fp){
        printf("Failed to open file.\n");
        exit(1);
    }
    double val;
    fseek(fp, 2*sizeof(double), SEEK_SET);
    fread((void*)&val, sizeof(double), 1, fp);
    printf("Third value is: %lf\n", val);
    //It can be read as the fseek() function is going to move the fp FILE pointer 16 bytes from the beginning of the file
    fseek(fp, -1*sizeof(double), SEEK_END); //Reading the last double value
    //This places the file pointer at the beginning of the last byte or the ending of the second last byte
    fread((void*)&val, sizeof(double), 1, fp);
    printf("Last value is: %lf\n", val);
    //If we want to move the FILE pointer at the beginning of the file from current location, wherever it may be
    //fseek(fp, 0L, 0) or feesk(fp, 0L, SEEK_SET);
    //In 0L, L means long type
    //The statement basically means moving the FILE pointer 0 bytes from the beginning of the file

    //If we want to move the FILE pointer to the end of the file from current location, wherever it may be
    //fseek(fp, 0L, 2); or fseek(fp, 0L, SEEK_END);
    //The statement basically means moving the FILE pointer 0 bytes from the end of the file

    //We can place the FILE pointer to any desired location using the fseek() function
    fclose(fp);
    return 0;
}
