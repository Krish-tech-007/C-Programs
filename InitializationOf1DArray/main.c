#include <stdio.h>
#include <stdlib.h>

int main()
{
    //When we declare an array, the content of each element of an array is by default is undefined, which basically means it can be anything
    //No implicit initialization for arrays declared inside a function
    //Garbage values will be present inside it
    int x[3], i;
    printf("Contents of the first array\n");
    for(i=0;i<3;printf("%d\n", x[i]),i++);

    //In order to initialize the array elements with some value, we have to do it explicitly
    int a[3] = {0}; //This will initialize all elements with the value of 0
    printf("Contents of the second array\n");
    for(i = 0; i<3; printf("%d\n", a[i]), i++);

    //If we want each element to be initialized with different values, we can do this
    int b[3] = {1,2,3};
    //First element is assigned with 1
    //Second element is assigned with 2
    //Third element is assigned with 3
    printf("Contents of the third array\n");
    for(i = 0; i<3; printf("%d\n", b[i]), i++);

    int c[3] = {1,2}; //If we initialize only some elements of the array and not the rest, then the values will be assigned in the given order sequentially and the remaining elements of the array would be assigned to 0
    printf("Contents of the fourth array\n");
    for(i = 0; i<3; printf("%d\n", c[i]), i++);
    return 0;
}
