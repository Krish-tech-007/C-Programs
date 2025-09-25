#include <stdio.h>
#include <stdlib.h>

void print(const char* c){
    //*c = 'C'; //This cannot be done
    while(*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main()
{
    //If we declare a variable with the keyword const, the value of the variable remains constant throughout the program
    //eg: const double PI = 3.14;
    //Any attempt to modify it will lead to a compilation error

    //When we declare an array, the name of the array is a constant pointer to the base address of the array
    //We cannot perform any changes to the value

    int x[] = {1,2,3,4};
    //We cannot do x++;

    int *ptr;
    ptr = x; //We assign the base address of the array x to the pointer ptr
    ptr++; //This is possible

    //However if we declare a pointer variable as a constant pointer variable using the const keyword
    //We cannot change it's value as well

    int * const ptr2 = x; //Declaring the ptr2 pointer variable as constant meaning it's value cannot be altered
    //Syntax of declaring a constant pointer variable: datatype * const pointer_name = address; or datatype *const pointer_name = address; or datatype*const pointer_name = address;
    //While declaring a constant pointer, the const keyword should be right before the pointer name
    //Remember; When we declare a constant variable, it must be initialized then only as we cannot initialize a constant variable later on
    //We cannot do ptr2++;
    (*ptr2)++; //This is possible

    //int * const ptr; is different from const int * ptr;
    const int *ptr3; //This means that the value de-referenced by the pointer is constant
    //But the value of the pointer can be changed
    ptr3++; //This is possible
    //We cannot do (*ptr3)++;

    //Summary:
    /*
    A constant pointer is whose value cannot be changed, i.e, the address that it stores remains constant
    But the value de-referenced from it can be modified
    Therefore a constant pointer is declared with the const keyword next to it's name or after the *

    If the const keyword is not next to it's name and is used before the * symbol
    Then it implies that the pointer's value is not constant, i.e the address it stores is not constant
    But the value that is de-referenced from it is constant and cannot be modified
    */



    /*
    My own Experiment: A pointer whose neither value, i.e address it stores can be changed, nor the value that is de-referenced from it

    const int * const ptr4 = x;
    //ptr4++;
    //(*ptr4)++;

    The experiment worked as both the statements give error demonstrating the inability to modify both the values despite the pointer being successfully declared

    //const datatype * ptrs; are useful when the purpose is only reading array data and not modifying it
    //datatype * const ptrs; are useful when the purpose is to point a beginning of something always
    */

    char c[] = "Hello"; //C is not a constant character pointer but a character constant pointer
    char *cPtr = "World!"; //ptr is a constant character pointer

    print(c);
    print(cPtr);

    return 0;
}
