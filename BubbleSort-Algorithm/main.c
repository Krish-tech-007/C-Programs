#include <stdio.h>
#include <stdlib.h>
//Bubble sort is a basic sorting algorithm that is used to sort an array in either ascending or descending order
//Not a high performance algorithm
//For high performance, we should use quick sort or merge sort
typedef enum{
    FALSE, TRUE
}BOOLEAN;
int main()
{
    //If an array is of size n, then we need to sort it n-1 number of times using bubble sort
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size*sizeof(int));
    if(NULL==arr){ //NULL is the same as '\0'
        printf("Failed to allocate memory for array.\n");
        exit(1);
    }
    int i,j;
    for(i=0;i<size;i++){
        printf("Enter element at index %d: ", i);
        scanf("%d", arr+i);
    }
    int count = 0;
    for(i=0;i<size-1;i++){
        BOOLEAN sorted = TRUE;
        for(j=0;j<size-1-i;j++){
            if(*(arr+j)>*(arr+j+1)){ //If we want it to be in ascending order then the condition should be *(arr+j)<*(arr+j+1)
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
                sorted = FALSE;
                count++;
            }
        }
        if(sorted){
            break;
        }
    }
    printf("Outer loop ran: %d times\n", i);
    printf("Number of exchange: %d\n", count);
    printf("Sorted array: ");
    for(i=0;i<size;i++){
        printf("%d ", *(arr+i));
    }


    free(arr);
    return 0;
}

//Issues before:
//Outer for loop does not exit early if the array is sorted before n-1 times
