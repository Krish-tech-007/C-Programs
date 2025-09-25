#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Array is a type of data structure
    //Syntax: type nameOfVariable[size];
    //Array is contiguous, meaning that the elements are stored in a single, unbroken block of memory
    //Members of the array are allocated space one after the other in primary memory
    //Each element of the array is accessible through it's index, with the first element having 0 as index and the last element size-1 as index
    int x[100];
    x[0] = 10;
    x[99] = 20;
    printf("First element: %d\n", x[0]);
    printf("Last element: %d\n", x[99]);

    int i;
    for(i = 0; i<100; x[i] = i+1, printf("Element no. %d = %d\n", i, x[i]), i++);
    return 0;
}
