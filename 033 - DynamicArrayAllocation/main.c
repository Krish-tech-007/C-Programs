#include <stdio.h>
#include <stdlib.h>

int main()
{
    //It is possible to allocate array dynamically during runtime with the size we need
    //When we declare an array mentioning a size, the compiler instructs in the object file to allocate memory for the particular number of elements

    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    //Since the size of the array would be supplied during runtime, the compiler won't generate any instruction for allocation
    int i;
    for(i = 0; i<n; printf("Enter element no. %d: ", i+1), scanf("%d", &arr[i]), i++);
    printf("Contents of the array\n");
    for(i = 0; i<n; printf("Element no. %d = %d\n", i+1, arr[i]), i++);
    return 0;
}
