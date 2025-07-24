#include <stdio.h>
#include <stdlib.h>

/* Function
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
The issue with this is that the changes made are to the local variables inside the function swap and not the variables of the caller function
*/
void swap(int* a, int* b){ //The address of the variables has to be captured in pointers
    int temp;
    temp = *a; //temp = Value at a
    *a = *b; //Value at a becomes Value at b
    *b = temp; //Value at b becomes temp
}
//Using the *operator we can access the original location

int main()
{
    //Popular example: Swapping two variables
    //If we call the swap function which does not use pointers, the changes made there would not be reflected here
    //To solve the issue, we pass the addresses of x and y to the swap function
    //Passing the addresses of a variable to a function allows us to make changes in the content of the variable directly from the function itself
    int x = 100, y = 200;
    swap(&x,&y); //Passing the addresses of the variables as arguments to the function
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    return 0;
}
