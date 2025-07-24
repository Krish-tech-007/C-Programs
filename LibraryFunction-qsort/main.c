#include <stdio.h>
#include <stdlib.h>
//qsort() function is the implementation of the quick sort algorithm
//qsort() function is a general sorting algorithm
int compareTo(const void *first, const void *second){ //Tells qsort() how to compare two elements of the array as the datatype may differ
    int *a = (int *)first;
    int *b = (int *)second;
    if(*a>*b)
        return +1; //Any positive number means the first number is greater than the second
    else if(*b>*a)
        return -1; //Any negative number means the second number is greater than the first
    else
        return 0; //If both are equal

}//This sorts the array in ascending order
//If we want to sort the array in descending order, we need to modify the comparative function
//Such that the first condition returns -ve and the second condition returns +ve
//Return type has to be int
int main()
{
    int x[] = {4,3,2,1,0,-1,-2};
    int size = 7;
    qsort(x, size, sizeof(int), compareTo);
    //qsort(base address of array, total number of elements, sizeof each element, address of the comparative function
    //Address of the function is always kept in the name of the function, i.e, the function pointer
    //qsort() function is going to pass the addresses of consecutive elements of the array as void pointer to the comparative function
    //The comparative function will compare the two values and return back the result to the qsort() function
    //qsort() function would then use the result for ordering the array
    int i;
    printf("Sorted array: ");
    for(i=0;i<size;i++){
        printf("%d ", *(x+i));
    }

    return 0;
}
