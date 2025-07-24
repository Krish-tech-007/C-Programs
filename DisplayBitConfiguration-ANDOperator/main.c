#include <stdio.h>
#include <stdlib.h>

void printBinary(int n){
    int i;
    unsigned k = 1 << 31;
    //Memory structure of k would be like
    //10000000 00000000 00000000 00000000
    //Importance of using unsigned integer type:
    //If we do not declare it as unsigned, it wouldn't be 2^31, it would be something else, a negative value
    //Further if we right shift an integer value, if it is negative
    //The vacant spaces created on the left would not be filled with 0 instead with 1 which can alter the output
    //Using an unsigned integer ensures that the left most significant bit is filled with 0 when vacant due to right shfiting
    for(i=0;i<sizeof(int)*8;i++){
        if(i%8==0 && i!=0){
            printf(" ");
        }
        if((n&(k>>i)) == (k>>i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}
int main()
{

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    //Instructor's approach
    printBinary(x);

    /*
    Alternate approach
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int i, count=0;
    char *arr = (char*)malloc(sizeof(int)*8+1);
    for(i = 0; i<32; i++, count++){
        int test = 1 << i;
        if(x&test){
           *(arr+(31-i)) =  '1';
        }
        else{
            *(arr+(31-i)) = '0';
        }
    }
    printf("%d in bits is: %s\n", x, arr);

    free(arr);
    */

    /* Another optimised alternative approach using left shit operator
    int i;
    for(i = 31;i>=0;i--){
        if(i%8==0 && i!=0){
            printf(" ");
        }
        int test = 1<<i;
        if(test&x){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    */

    /*
    My approach using right shift operator
    unsigned int i, test = 1<<31;
    for(i=0;i<32;i++){
        if(i%8==0 && i!=0){
            printf(" ");
        }
        //int test = 1073741824>>i;
        //It’s better to handle the maximum value using its binary representation.
        //test = test>>i;
        if((x & (test>>i)) == (test>>i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    */

    return 0;
}

/*
Using unsigned int is more effective in this case because it ensures the bitwise operations behave predictably,
especially when dealing with the leftmost bit.
Here's why:

Sign Bit Handling: In a signed integer, the leftmost bit is used as the sign bit,
which can cause unexpected results when performing bitwise shifts or AND operations.
An unsigned integer doesn't have a sign bit, so it simplifies the operations.

Positive Values Only: When you shift bits to the left in signed integers, you might introduce negative numbers,
which isn't the case with unsigned integers.
This makes it more straightforward to interpret the results.

Consistency: Using unsigned integers guarantees consistent logical operations without needing to consider negative representation,
especially when you're working with fixed-width binary representations like in this case.
*/
