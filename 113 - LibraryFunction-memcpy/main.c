#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char source[] = "Blah Blah, Hello World!!";
    char destination[100];
    memset(destination, '\0', 100);
    //memcpy() function can be used to copy a portion of memory block to another destination memory block
    memcpy(destination, source, 4); //The memcpy() function copies byte by byte
    //It will copy the number of bytes we mention to it from the source to the destination

    //First parameter is the destination address
    //Second parameter is the source address from where we want to start the copying (We can use pointer arithmetic if required)

    //Since memcpy() function copies byte by byte, it does not append null character at the end
    printf("Copied string: %s\n", destination);

    int *ptr = (int *)malloc(sizeof(int)*10);

    srand(time(NULL));
    int i;
    for(i=0;i<10;i++){
        *(ptr+i) = rand() % 100;
    }
    printf("Contents of the first block\n");
    for(i=0;i<10;i++){
        printf("%4d", *(ptr+i));
    }

    int *ptr2 = (int *)malloc(sizeof(int)*10);
    for(i=0;i<10;i++){
        memcpy(ptr2+i, ptr+i, sizeof(int));
    }
    printf("\nContents of the second block\n");
    for(i=0;i<10;i++){
        printf("%4d", *(ptr2+i));
    }

    free(ptr);
    free(ptr2);
    return 0;
}
