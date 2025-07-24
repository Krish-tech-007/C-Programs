#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
//Scanning lines of text from a text file and storing it in character array
int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/names.txt", "r");
    if(fp==NULL){
        printf("Error while opening file.\n");
        exit(1);
    }
    char name[SIZE]; //To store each name
    //In order to read lines from a file, we have a library function called fgets()
    //fgets() requires three parameters,
    //first is the name of the character array where the line is going to be stored
    //second is the size of the character array for handling overflow,
    //if the scanned line contains more number of characters than size, then the characters before the size limit is considered and the rest ignored
    //third is the FILE pointer
    //fgets() also moves the FILE pointer to the next location automatically
    //fgets() stores the whole line including the '\n'

    //We have to keep reading lines till we encounter the end of the file
    while(!feof(fp)){
        fgets(name, SIZE, fp);
        printf("%s", name);
    }
    fclose(fp);


    return 0;
}

/*fgets() is a built-in function that reads the given number of characters of a line from input stream and stores it into the specified string.
 It stops when it reads either given number of characters, the newline character, or the end-of-file (EOF) is reached.*/
























































/*char ch;
    int size = 0;
    ch = fgetc(fp);
    while(!feof(fp)){
        if(ch=='\n')
            size++;
        ch = fgetc(fp);
    }
    size += 1;

    fp = fopen("C:/Users/User/Documents/C Programs/names.txt", "r");
    char *names[size];
    int i, maxSize=80;
    for(i= 0; i<size; i++){
        int count = 0;
        ch = fgetc(fp);
        while(ch != '\n' && !feof(fp)){
            count++;
            ch = fgetc(fp);
        }
        if(count<maxSize){
            count = maxSize;
        }
    }
    fp = fopen("C:/Users/User/Documents/C Programs/names.txt", "r");
    for(i= 0; i<size; i++){
        char str[maxSize];
        int index = 0;
        str[index] = fgetc(fp);
        while(str[index] != '\n' && !feof(fp)){
            index++;
            str[index] = fgetc(fp);
        }
        str[index] = '\0';
        names[i] = str;
        printf("names[%d]: %s, Stored in %d\n", i, names[i], &names[i]);
    }

    for(i = 0; i<size; i++){
       printf("names[%d]: %s, Stored in %d\n", i, names[i], &names[i]);
    }

    printf("Success\n");*/
