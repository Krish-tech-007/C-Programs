#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Array can be of any type: int, float, double, char
    //Array is a collection of variables of the same type
    //char array[10], all 10 elements will be of type char
    //nth element can be accessed by n-1 index
    //If you want to access the 2nd element, you have to use 1 as index

    //Declaration: datatype name[size];
    int array[10];
    //Only initialization: name[index] = value;
    array[0] = 15;
    array[5] = 8;

    //Declaration and intialization: datatype name[size] = {value};
    double arr[10] = {0.0};
    //This gives each element the same value
    int arr2[3] = {1,2,3}; //Sequentially assignment
    //1st element - 1
    //2nd element - 2
    //3rd element - 3

    int arr3[4] = {1,2};
    //1st element - 1
    //2nd element - 2
    //3rd element - 0
    //4th element - 0
    printf("%d\n", arr3[0]);
    printf("%d\n", arr3[1]);
    printf("%d\n", arr3[2]);
    printf("%d\n", arr3[3]);

    for(int i = 0; i<4; i++){
        scanf("%d", &arr3[i]);
    }
    for(int i = 0;i<4;i++){
        printf("%d", arr3[i]);
        //0,1,2,3
    }

    /*
    1. for loop - number of iterations is known, i.e, the number of times the loop will run
    2. while loop- if number of iterations is unknown
    3. do while loop - if number of iterations is unknown but the loop has to run atleast once
    */

    //1 to 10
    //1 to n
    //n user input


    /*
    Input in array using loop
    for(int i = 0; i<size;i++){
        printf("Enter value: ");
        scanf("%x", &name[i]);
    }
    */

    /*
    for(int i = 0; i<size;i++){
        printf("%x\n", name[i]);
    }
    */

    //Declare an array to store marks of 10 students
    //Take user inputs for marks
    //Calculate the class average and displlay


    /*
    1. Traversal, looping through array
    2. copying, copying values of one array into another
    */
    /*
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int array1[n], array2[n]; //For copying one array into another array, second array should be atleast equal or greater in size
    for(int i = 0; i<n;i++){
        printf("Enter value: ");
        scanf("%x", &array1[i]);
    }
    //Copying
    /*for(int i = 0; i<n; i++){
        array2[i] = array1[i];
    }

    */

    //Reversing
    //9 to 0

    //0 to n-1
    //n-1 to 0

    /*
    for(int i = n-1; i>=0; i--){
        printf("%d\n", array1[i]);
    }

    // 13, 11, 10, 12
    //Unsorted array - Neither in ascending nor descending order, jumbled up
    //Sorted array - either in descending or ascending order

    //Sorting - converting unsorted into sorted array

    for(int i = 0; i<size;i++){
        for(int j = i+1; j<size;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 */
 /*
    int m, n;
    //m refer to row
    //n refer to column
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    //Syntax: datatype name[number of rows][number of columns]
    int matrix[m][n];
    //Input in a 2D array
    for(int i = 0; i<m; i++){ //Looping rows
        for(int j = 0; j<n; j++){ //Looping columns
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i<m; i++){ //Looping rows
        for(int j = 0; j<n; j++){ //Looping columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
*/

    //Pointers
    //Someone points to something
    //Where is the UB Block? You point to the building, you are effectively the pointer

    /*
    int var; //var is a block of memory that stores some value
    var = 10;
    printf("Value of var: %d\n", var);
    //& is the address of operator
    //It gives the memory location of a particular variable in byte number, eg: 22nd byte
    printf("Address of var: %d\n", &var);

    int *ptr; //Declaration of a pointer variable
    ptr = &var; //Assignment
    printf("Value of ptr: %d\n", ptr);
    printf("Address of ptr: %d\n", &ptr);
    printf("Value of *ptr: %d\n", *ptr);

    var = 20;
    printf("Updated value of var: %d\n", var);
    //Either for accessing data or storage/modification
    printf("Accessing value of var using pointer: %d\n", *ptr);
    //* means "value stored at address"
    //ptr refers to address of var
    //*ptr means value at the address of var

    //Modifying value of var using pointers
    //var = 30;
    *ptr = 30;
    //*ptr = var
    printf("Value of var after pointer modification: %d\n", var);

    //A pointer must be of the same datatype as of the data it is storing
    //int var; int *ptr;
    //float var; float *ptr;
*/

    int arr[3] = {1,4,6};
    int *ptr = &arr; //1000
    //Formula for pointer arithmetic
    //ptr+i = ptr + i*size of datatype
    for(int i = 0; i<3; i++){
        printf("Enter a number: ");
        scanf("%d", ptr+i); //1000, 1004, 1008
        //1000+0 = 1000
        //1000+1 = 1000 + (1*4) = 1004
        //1000+2 = 1000 + (2*4) = 1008
    }
    for(int i =0; i<3; i++){
        printf("%d\n", *(ptr+i));
        //*(ptr+0) = *1000 = 1
        //*(ptr+1) = *1004 = 4
        //*(ptr+2) = *1008 = 6
    }


    return 0;
}
