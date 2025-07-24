#include <stdio.h>
#include <stdlib.h>

int main()
{
    //The main difference between malloc and calloc
    //malloc does not do any implicit initialization of the memory allocated, i.e, the allocated space contains garbage values
    //While calloc initializes each byte with 0 implicitly, i.e, default initialization

    //Further
    //malloc only receives one argument, i.e, the number of bytes to be allocated
    //calloc receives two arguments, i.e, number of elements that we need and the size of each element

    //On successful allocation of dynamic memory, both return a void pointer pointing to the base address
    //On un-successful allocation of dynamic memory, both return a void pointer containing NULL
    //Both allocate continuous memory in the Heap

    int *ptr;
    int n;

    printf("How many numbers do you wish to enter? ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if(ptr==NULL){
        printf("Could not allocate memory. Exiting the program.");
        exit(1);
    }

    int i;
    for(i = 0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d", ptr+i);
    }

     printf("Contents of the memory: ");
     for(i=0; i<n; i++){
        printf("%4d", *(ptr+i));
     }


     free(ptr);
    return 0;
}
