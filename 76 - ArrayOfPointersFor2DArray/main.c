#include <stdio.h>
#include <stdlib.h>
//Instructor's Approach: Create a function
//TIP:
/* From a comment on a youtube video
I spent decades writing C/C++ code daily, and the best bit of advice anyone ever gave me stuck with me that entire time relating to pointers.
Not sure if it is in this video, as I didn't watch it all ...

When you are reading the declaration of a C/C++ variable, read it right to left in English and the meaning is obvious

e.g. What is a variable defined as ... int * const *
Backward .. it is a Pointer to a constant pointer to an integer

e.g. What is a variable defined as int [] **
Backward .. it is a Pointer to a Pointer to an Array of Integers
*/
int* *allocate(int nRows, int nCols){
    //A function that returns a pointer to a pointer

    int **ptr; //Pointer to pointer type variable for holding the base address of an array of pointers
    ptr = (int* *)malloc(nRows * sizeof(int*)); //We are allocating the array of pointers
    //We know the syntax for malloc, ptr = (datatype *)malloc(n*sizeof(dataytpe);
    //Here the datatype of each element is int*
    //Allocating the array of pointers with number of elements that will hold the base address for each row
    //Each element of the array should be an integer pointer
    //We know malloc returns a void pointer, which is now casted to an integer pointer to a pointer
    //This is because the void pointer points to the base address of an array whose elements are all pointers

    /*
    int x = 42;
    int *ptr = &x;
    void *voidPtr = &ptr; // voidPtr is a void pointer to the int pointer

    // Casting void pointer to a pointer to an int pointer
    int **ptrToPtr = (int **)voidPtr; // Now ptrToPtr points to the address of the int pointer (ptr)
    printf("Value of x: %d\n", **ptrToPtr);
    */

    if(ptr==NULL){
        printf("Memory allocation failed. Exiting the program.\n");
        exit(1);
    }

    int i,j;
    for(i=0; i<nRows;i++){
        *(ptr+i) = (int *) malloc(nCols * sizeof(int)); //*(ptr+i) gives the ith element(a pointer) in the array of pointers created using malloc
        //We are storing the void pointer returned by malloc function as integer pointer which is stored in an integer pointer as well
        //We are allocating space for each row of the array
    }
    return ptr;
}

void inputValues(int **ptr, int nRows, int nCols){
    int i, j;
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            printf("Enter a number: ");
            scanf("%d", *(ptr+i)+j);
        }
    }
}

void printValues(int **ptr, int nRows, int nCols){
    int i, j;
    printf("Content of the array\n");
    for(i = 0; i<nRows; i++){
        for(j = 0; j<nCols; j++){
            printf("%d ", *(*(ptr+i)+j));
        }
        printf("\n");
    }
}

void deallocate(int **ptr, int nRows){
    int i;
    for (i = 0; i < nRows; i++){
        free(*(ptr + i));
    }
    free(ptr);
}

int main()
{
    //We have modeled a 2D array using three 1D integer arrays and one 1D array of integer pointers
    //That was a 3x3 2D array

    //Now we will model a totally dynamic 2D array

    //My approach
    /*
    int m, n;
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    //No. of rows = Size of array of pointers
    int* ptrs[m];
    //Each element of array ptrs is a pointer
    //Each element of array ptrs is to point the base address of each row of the 2D array

    int i, j;
    for(i = 0; i<m; i++){
        *(ptrs+i) = (int*) malloc(n * sizeof(int));
        if(*(ptrs+i) == NULL){
            printf("Failed to allocate memory. Exiting the program.\n");
            exit(1);
        }
    }
    //Now each element of the ptrs array points to each row of the 2D aray

    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("Enter a number: ");
            scanf("%d", *(ptrs+i)+j);
        }
        printf("\n");
    }

    printf("Contents of the array\n");
    for(i = 0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", *(*(ptrs+i)+j));
        }
        printf("\n");
    }

    for(i = 0; i<m; i++){
        free(*(ptrs+i));
    }
    printf("\nMemory freed.\n");
    */


    //Instructor's approach
    // /*

    int **ptr;
    int nRows, nCols; //For holding no. of rows and columns
    printf("Enter no. of rows: ");
    scanf("%d", &nRows);
    printf("Enter no. of columns: ");
    scanf("%d", &nCols);

    ptr = allocate(nRows, nCols);
    inputValues(ptr, nRows, nCols);
    printValues(ptr, nRows, nCols);
    deallocate(ptr, nRows);

    // */
    return 0;
}
