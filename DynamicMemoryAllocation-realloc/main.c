#include <stdio.h>
#include <stdlib.h>

int main()
{
    //realloc is used to reallocate existing dynamic memory by preserving the existing values with some new size
    //If we have an existing dynamic memory allocated using malloc or calloc, we can increase or reduce it using realloc
    //realloc retains the existing content in the new allocation

    //realloc returns base address of the new memory location if successful
    //realloc returns NULL if un-successful

    int *ptr;
    int n;
    printf("How many numbers do you wish to enter? ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory could not be allocated. Exiting the program.\n");
        exit(1);
    }

    int i;
    for(i = 0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d", ptr+i);
    }

    printf("Content of memory: ");
    for(i = 0; i<n; i++){
        printf("%4d", *(ptr+i));
    }
    printf("\n");
    int new_no = n + 3; //Increasing the size of the dynamic memory by 3 elements
    //realloc is supplied the existing base address following by the new size in bytes

    ptr = (int *) realloc(ptr, new_no * sizeof(int));
    if(ptr == NULL){
        printf("Could not allocate sufficient memory. Exiting the program.\n");
        exit(1);
    }

    //Allocating values to the extended memory
    *(ptr+n) = 7;
    *(ptr+n+1) = 8;
    *(ptr+n+2) = 9;

    printf("Contents of the extended memory: ");
    for(i = 0; i<new_no; i++){
        printf("%4d", *(ptr+i));
    }
    printf("\n");

    free(ptr);
    return 0;
}
