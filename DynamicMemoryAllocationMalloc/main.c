#include <stdio.h>
#include <stdlib.h> //Contains the library functions: malloc, calloc, realloc

int main()
{
    int x[20]; //Typically a compile time allocation
    //Which means compiler is going to write the memory allocation instruction for the Operating System
    //Which the Operating System follows exactly during the execution period
    //The compiler knows int type takes 4 bytes, so for an int array of 20 elements, the compiler writes 80 bytes instruction for the Operating System
    //The Operating System does exactly what the compiler writes in the object file
    //This is called compile time allocation
    //Drawback: We cannot change the allocation during the execution period
    //This can lead to memory shortage or wastage as we cannot know in advance for every scenario, the memory required

    //In runtime allocation, the compiler never generates any instruction for memory allocation
    //Rather it calls some utility function that then allocates memory during execution period according to the discretion of the programmer
    //We can allocate an exact amount of memory required, we can specify the time we want the memory to be retained for and when it should be freed
    //The memory management is in the hands of the programmer

    //Dynamic memory is allocated in the heap area

    //For memory allocation, we use the malloc function
    //We will also need a pointer in order to store the base address
    int *ptr;
    int n;

    printf("How many numbers do you wish to enter? ");
    scanf("%d", &n);
    //n is the number of values the program needs to process
    ptr = (int*) malloc(n * sizeof(int));
    //Syntax: ptr = (datatype*) malloc(n*sizeof(datatype));
    //The malloc function takes as parameter the total number of bytes it needs to allocate during runtime
    //It returns the base address as void pointer
    //This is because the malloc function does't know what do we intend to store inside the allocated memory
    //We need to explicitly cast the void pointer that the malloc function returns to the datatype which we intend to store inside the memory

    //All the utilities function that we use for dynamic memory allocation, malloc, calloc and realloc
    //They allocate memory continuously

    //There may be a case that the Operating System may fail to find a continuous block of memory of sufficient size
    //In that case it returns null to the caller
    if(ptr==NULL){
        printf("Could not allocate memory. Exiting program\n");
        exit(1); //To indicate there was some averse situation or to indicate an exceptional exit
    }

    //If the program reaches here, then the memory is available and can be accessed via pointer
    int i;
    for(i = 0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d", ptr+i);
    }

    printf("Contents of the memory\n");
    for(i = 0; i<n; i++){
        printf("%4d", *(ptr+i));
    }

    //Whenever we are allocating memory using dynamic memory allocation
    //It becomes our responsibility to free the memory also when the task is completed

    free(ptr); //We pass the pointer that is pointing to the base address of the dynamically allocated location
    //We can use the free function in order to return the allocated memory back to the free space
    //It de-allocates memory as soon as we call it
    //Otherwise there is a chance of memory leak in our system that may lead to an adverse situation
    //It may lead to failure of anymore attempts to dynamically allocate memory in the system
    return 0;
}
