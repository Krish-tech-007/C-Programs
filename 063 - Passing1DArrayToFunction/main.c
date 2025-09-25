#include <stdio.h>
#include <stdlib.h>

void printArray(int *ptr_arr, int n){ //Array name needs to be taken as pointer because it is indeed pointer
    int i;
    //for(i = 0;i<n;printf("Element at index %d: %d\n", i,*ptr_arr), ptr_arr++, i++);
    for(i = 0; i<n; i++){
        printf("Element at index %d: %d\n", i, *(ptr_arr+i));
    }
}

void printReverseArray(int *ptr_arr, int n){
    int i;
    for(i = n-1; i>=0; i--){
        printf("Element at index %d: %d\n", i, *(ptr_arr+i));
    }
}

void SumOfElements(int arr[], int size){
    int i, sum = 0;
    /*
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr: %d\n", sizeof(arr));
    printf("Size of arr[0]: %d\n", sizeof(arr[0]));
    printf("Size of array calculated: %d\n", size);

    The size of the array is calculated wrong in the function
    This is because when we pass an array to a function, the base address of the array is passed as a pointer
    The whole array is not actually passed and copied over to the parameters
    Instead only a pointer to the base address is passed to the function

    We know in our example that the size of the array should be 5: 20 bytes (actual size of array) / 4 bytes
    But we get only 2: 8 bytes(size of an integer pointer) / 4

    This happens as the compiler implicitly converts int arr[] to int*arr

    It makes sense because arrays can be really large and copying them as parameters of a function can occupy a lot of memory
    Thus the compiler only stores the base address

    Hence it is not possible to calculate the size of the array inside a function usually unless explicitly provided
    */


    for(i = 0; i<size; i++){
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
}

void Double(int arr[], int size){
    int i;
    for(i = 0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int x[] = {10,20,30,40,50};
    //In order to pass a 1D array to a function
    //We need to pass it's base address or the name of the array to the function
    //We also need to pass the total number of elements in the array to the function as well in order to iterate over the array elements
    int size;
    size = sizeof(x)/sizeof(x[0]);
    printArray(x, size);
    printf("\n");
    printReverseArray(x,size);
    printf("\n");
    SumOfElements(x, size);
    printf("\n");
    Double(x, size);
    printf("Each element of the array is doubled.\n");
    printArray(x, size);
    return 0;
}

//When we need to pass an array to a function, then we don't pass the whole array to the function, but only the base address
