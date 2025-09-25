#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Only operator that requires three operands to work
    //The ternary language is also part of C++ and Java
    //Syntax:
    //(condition) ? expression for true : expression for false;

    //Example
    //A condition implemented using if else
    /*int m;
    if(a>b){
        m = a + b;
    }
    else{
        m = a - b;
    }*/

    //The same can be implemented using ternary operator
    //m = (a>b) ? a + b : a - b;

    //Another example
    //Finding the maximum of three numbers using if else
    /*
    if(a>b && a>c){
        m = a;
    }
    else if(b>c){
        m = b;
    }
    else{
        m - c;
    }
    */

    //Using ternary operator
    // m = (a>b && a>c) ? a : (b>c ? b : c);
    //Nested version

    //Another example
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age>=13 && age<=19) ? printf("Teenager\n") : printf("Not a teenager\n");
    return 0;
}
